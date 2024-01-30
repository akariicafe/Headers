@interface HUNavigationBarLayoutOptions : NSObject <NSCopying>

@property (readonly, nonatomic) long long viewSizeSubclass;
@property (nonatomic) double containerLeadingMargin;
@property (nonatomic) double containerTrailingMargin;
@property (nonatomic) double topMargin;
@property (nonatomic) double bottomMargin;
@property (nonatomic) double height;
@property (readonly, nonatomic) double leadingMargin;
@property (readonly, nonatomic) double trailingMargin;

+ (id)defaultOptionsForViewSizeSubclass:(long long)a0 containerLeadingMargin:(double)a1 containerTrailingMargin:(double)a2;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithViewSizeSubclass:(long long)a0;

@end
