@class NSString, UITargetedPreview;

@interface _UINullClickHighlightEffect : NSObject <_UIClickHighlightEffect>

@property (readonly, nonatomic) UITargetedPreview *targetedPreviewForEffectContinuation;
@property (readonly, nonatomic) UITargetedPreview *targetedPreview;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)effectWithPreview:(id)a0 continuingFromPreview:(id)a1;

- (void).cxx_destruct;
- (void)interaction:(id)a0 didChangeWithContext:(id)a1;

@end
