@class NSString, NSMapTable;
@protocol UITextPasteConfigurationSupporting_Internal;

@interface UITextPasteController : NSObject <UITextPasteCoordinatorDelegate> {
    NSMapTable *_sessions;
}

@property (weak, nonatomic) id<UITextPasteConfigurationSupporting_Internal> supportingView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)combineAttributedStrings:(id)a0 addingSeparation:(BOOL)a1;

- (id)initWithSupportingView:(id)a0;
- (void).cxx_destruct;
- (id)beginDroppingItems:(id)a0 toSelectedRange:(id)a1 progressSupport:(id)a2 animated:(BOOL)a3 delegate:(id)a4;
- (id)_combineItemAttributedStrings:(id)a0 forRange:(id)a1;
- (void)_transformTextPasteItem:(id)a0;
- (void)coordinator:(id)a0 endPastingItems:(id)a1;
- (BOOL)_pasteDelegateHandlesPasting;
- (id)beginPastingItems:(id)a0 toRange:(id)a1;
- (id)_clampRange:(id)a0;
- (void)_restorePasteResultForSession:(id)a0;
- (id)beginPastingItems:(id)a0 toRange:(id)a1 delegate:(id)a2 matchesTextStyles:(BOOL)a3;
- (id)beginDroppingItems:(id)a0 toSelectedRange:(id)a1 progressSupport:(id)a2 animated:(BOOL)a3;
- (void)_performPasteOfAttributedString:(id)a0 toRange:(id)a1 forSession:(id)a2 completion:(id /* block */)a3;
- (void)_executePasteForSession:(id)a0;

@end
