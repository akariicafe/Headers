@class UIColor, NSArray, VUITextLayout, NSString;

@interface VUIMediaTagsViewLayout : NSObject

@property (nonatomic) unsigned long long type;
@property (readonly, nonatomic) VUITextLayout *textLayout;
@property (readonly, nonatomic) VUITextLayout *rentalExpirationTextLayout;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } margin;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (readonly, nonatomic) NSArray *groupedKeys;
@property (readonly, nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } groupMargin;
@property (readonly, nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } commonSenseMargin;
@property (readonly, nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } tomatoMeterMargin;
@property (retain, nonatomic) NSString *compositingFilter;
@property (nonatomic) BOOL alignBadgeVertically;
@property (nonatomic) double badgeMaxHeight;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } badgeMargin;
@property (retain, nonatomic) UIColor *badgeTintColor;
@property (readonly, nonatomic, getter=isGroupActivityTagEnabled) BOOL groupActivityTagEnabled;

- (void).cxx_destruct;
- (id)init;
- (id)initWithType:(unsigned long long)a0;

@end
