@class NSString, NUComposition, PICompositionController;

@interface PXEditCompositionAction : PXAction

@property (readonly, nonatomic) NUComposition *sourceComposition;
@property (readonly, nonatomic) NUComposition *targetComposition;
@property (readonly, nonatomic) PICompositionController *compositionController;
@property (copy, nonatomic) NSString *actionNameLocalizationKey;
@property (copy, nonatomic) NSString *localizedActionName;

- (id)init;
- (void).cxx_destruct;
- (void)_applyComposition:(id)a0;
- (id)initWithCompositionController:(id)a0;
- (void)performRedo:(id /* block */)a0;
- (void)performUndo:(id /* block */)a0;

@end
