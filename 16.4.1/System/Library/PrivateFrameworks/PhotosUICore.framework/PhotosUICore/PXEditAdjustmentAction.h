@class NSString, NSNumber, NUComposition;

@interface PXEditAdjustmentAction : PXEditCompositionAction {
    NUComposition *_sourceComposition;
    NUComposition *_targetComposition;
}

@property (readonly, nonatomic) NSString *adjustmentKey;
@property (readonly, nonatomic) NSNumber *targetValue;

+ (id)muteToggleActionWithCompositionController:(id)a0 isLoopingVideo:(BOOL)a1;

- (void)performAction:(id /* block */)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCompositionController:(id)a0 adjustmentKey:(id)a1 targetValue:(id)a2;
- (id)sourceComposition;
- (id)targetComposition;

@end
