@class NSArray;
@protocol _CNAvatarViewDelegate;

@interface _CNAvatarView : UIView

@property (copy, nonatomic) NSArray *likenessViews;
@property (copy, nonatomic) NSArray *subviewsConstraints;
@property (weak, nonatomic) id<_CNAvatarViewDelegate> delegate;
@property (retain, nonatomic) NSArray *likenessProviders;

+ (BOOL)requiresConstraintBasedLayout;

- (void).cxx_destruct;
- (void)updateConstraints;
- (void)setupSubviews;

@end
