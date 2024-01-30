@class NSURL, SBIconView, UIView, UIViewController;

@interface SBHPeopleWidgetPersonDetailInteractionContext : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSURL *personURL;
@property (readonly, nonatomic) SBIconView *sourceIconView;
@property (readonly, nonatomic) SBIconView *referenceIconView;
@property (readonly, nonatomic) UIViewController *containerViewController;
@property (readonly, nonatomic) UIView *homeScreenContentView;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } homeScreenContentFrame;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithPersonURL:(id)a0 sourceIconView:(id)a1 referenceIconView:(id)a2 containerViewController:(id)a3 homeScreenContentView:(id)a4 homeScreenContentFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a5;

@end
