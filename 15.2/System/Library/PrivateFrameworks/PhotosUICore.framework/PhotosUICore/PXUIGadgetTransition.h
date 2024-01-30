@class PXOneUpPresentation, NSString;
@protocol PXGridPresentation;

@interface PXUIGadgetTransition : NSObject <PXGadgetTransition>

@property (readonly, nonatomic) PXOneUpPresentation *oneUpPresentation;
@property (readonly, nonatomic) id<PXGridPresentation> gridPresentation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithOneUpPresentation:(id)a0 gridPresentation:(id)a1;

@end
