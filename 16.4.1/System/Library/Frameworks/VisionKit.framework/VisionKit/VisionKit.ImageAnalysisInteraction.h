@class UIView;

@interface VisionKit.ImageAnalysisInteraction : NSObject <UIInteraction> {
    void /* unknown type, empty encoding */ interaction;
    void /* unknown type, empty encoding */ proxy;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ analysis;
    void /* unknown type, empty encoding */ preferredInteractionTypes;
}

@property (nonatomic, readonly) UIView *view;

- (void)willMoveToView:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)didMoveToView:(id)a0;

@end
