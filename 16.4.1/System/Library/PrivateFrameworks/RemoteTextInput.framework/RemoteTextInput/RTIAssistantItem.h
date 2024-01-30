@class UIColor, NSArray;

@interface RTIAssistantItem : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL visibleWhenMinimized;
@property (nonatomic) BOOL showsBarButtonItemsInline;
@property (nonatomic) BOOL showsInputDashboardViewController;
@property (nonatomic) float centerViewPreferredWidth;
@property (retain, nonatomic) UIColor *detachedTintColor;
@property (retain, nonatomic) UIColor *detachedBackgroundColor;
@property (retain, nonatomic) NSArray *leadingBarButtonGroups;
@property (retain, nonatomic) NSArray *trailingBarButtonGroups;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
