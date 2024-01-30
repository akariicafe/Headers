@class UIColor, NSShadow, VUITextLayout, NSArray, VUITextBadgeLayout, NSString;

@interface VUIMediaTagsViewLayout : NSObject

@property (nonatomic) unsigned long long type;
@property (readonly, nonatomic) VUITextLayout *textLayout;
@property (retain, nonatomic) VUITextBadgeLayout *liveTextBadgeLayout;
@property (retain, nonatomic) VUITextBadgeLayout *timeTextBadgeLayout;
@property (readonly, nonatomic) VUITextLayout *rentalExpirationTextLayout;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } margin;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (retain, nonatomic) NSShadow *shadow;
@property (readonly, nonatomic) NSArray *groupedKeys;
@property (readonly, nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } groupMargin;
@property (readonly, nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } commonSenseMargin;
@property (readonly, nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } tomatoMeterMargin;
@property (retain, nonatomic) NSString *compositingFilter;
@property (nonatomic) double maxWidth;
@property (readonly, nonatomic) BOOL orphanAvoidance;
@property (nonatomic) BOOL centerAlign;
@property (readonly, nonatomic, getter=isWrappingAllowed) BOOL wrappingAllowed;
@property (nonatomic) BOOL alignBadgeVertically;
@property (nonatomic) double badgeMaxHeight;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } badgeMargin;
@property (retain, nonatomic) UIColor *badgeTintColor;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } textBadgeMargin;
@property (readonly, nonatomic, getter=isGroupActivityTagEnabled) BOOL groupActivityTagEnabled;

- (id)initWithType:(unsigned long long)a0;
- (id)init;
- (void).cxx_destruct;

@end
