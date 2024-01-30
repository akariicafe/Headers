@class UIColor, NSString, CNContactStyle, UIImage, CNQuickActionsManager, UIView;

@interface CNQuickAction : NSObject

@property (nonatomic, getter=isBackAction) BOOL backAction;
@property (nonatomic) BOOL enabled;
@property (weak, nonatomic) CNQuickActionsManager *manager;
@property (retain, nonatomic) NSString *category;
@property (retain, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *globalIdentifier;
@property (retain, nonatomic) UIImage *image;
@property (copy, nonatomic) NSString *title;
@property (weak, nonatomic) UIView *sourceView;
@property (nonatomic) BOOL cached;
@property (nonatomic) BOOL dismissesWithAnimation;
@property (nonatomic) unsigned long long score;
@property (copy, nonatomic) id /* block */ performBlock;
@property (retain, nonatomic) CNContactStyle *previousStyle;
@property (nonatomic) BOOL useDuetIfAvailable;
@property (nonatomic) BOOL isLongPress;
@property (retain, nonatomic) UIColor *imageTintColor;

+ (id)actionWithTitle:(id)a0 image:(id)a1 block:(id /* block */)a2;
+ (id)defaultTitleForActionInCategory:(id)a0 context:(long long)a1;
+ (id)possibleTitlesForActionsInCategories:(id)a0 context:(long long)a1;
+ (BOOL)reallyPerform;

- (void)perform;
- (void)cancel;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)_coreDuetInteractionMechanisms;
- (id)_coreDuetValue;
- (id)defaultTitleForContext:(long long)a0;
- (id)imageForContext:(long long)a0;
- (BOOL)matchesDuetInteraction:(id)a0;
- (id)outlinedImage;
- (void)performWithCompletionBlock:(id /* block */)a0;
- (id)subtitleForContext:(long long)a0;
- (id)titleForContext:(long long)a0;
- (id)userActionType;

@end
