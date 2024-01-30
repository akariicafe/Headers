@class NSString, NSMutableArray, UIViewController;

@interface _UIContextMenuAnimator : NSObject <UIContextMenuInteractionCommitAnimating, UIContextMenuInteractionAnimating>

@property (readonly, nonatomic) BOOL hasAnyActions;
@property (readonly, nonatomic) NSMutableArray *animations;
@property (readonly, nonatomic) NSMutableArray *completions;
@property (nonatomic) long long preferredCommitStyle;
@property (readonly, nonatomic) UIViewController *previewViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)animatorWithViewController:(id)a0;

- (void)addAnimations:(id /* block */)a0;
- (void)addCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (void)performAllAnimations;
- (void)performAllCompletions;

@end
