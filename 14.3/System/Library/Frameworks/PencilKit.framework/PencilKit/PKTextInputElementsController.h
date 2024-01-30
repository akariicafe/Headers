@class NSDictionary, NSString, UIView;
@protocol PKTextInputElementsControllerDelegate;

@interface PKTextInputElementsController : NSObject <PKTextInputDebugStateReporting> {
    long long _nextElementRecognitionIdentifierIndex;
    long long _finderGenerationCounter;
    long long _finderGenerationOfLastDiscoveredElements;
}

@property (copy, nonatomic, setter=_setLastDiscoveredElementsByUniqueID:) NSDictionary *lastDiscoveredElementsByUniqueID;
@property (weak, nonatomic) id<PKTextInputElementsControllerDelegate> delegate;
@property (retain, nonatomic) UIView *containerView;
@property (readonly, nonatomic) double lastDiscoveredElementsUpdateTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithContainerView:(id)a0;
- (void)_replaceLastDiscoveredElementsWithElements:(id)a0;
- (void)reportDebugStateDescription:(id /* block */)a0;
- (void)updateTextInputElementsWithReferenceHitPoint:(struct CGPoint { double x0; double x1; })a0 referenceSearchArea:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 referenceCoordSpace:(id)a2 completion:(id /* block */)a3;
- (void)flushDiscoveredElements;

@end
