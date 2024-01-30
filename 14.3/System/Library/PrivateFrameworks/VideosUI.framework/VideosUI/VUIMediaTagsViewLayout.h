@class NSArray, TVImageLayout, VUITextLayout;

@interface VUIMediaTagsViewLayout : TVViewLayout

@property (nonatomic) unsigned long long type;
@property (readonly, nonatomic) VUITextLayout *textLayout;
@property (readonly, nonatomic) VUITextLayout *rentalExpirationTextLayout;
@property (readonly, nonatomic) NSArray *groupedKeys;
@property (readonly, nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } groupMargin;
@property (readonly, nonatomic) TVImageLayout *badgeImageLayout;
@property (readonly, nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } commonSenseMargin;
@property (readonly, nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } tomatoMeterMargin;

+ (id)layoutWithLayout:(id)a0 element:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (id)initWithType:(unsigned long long)a0;

@end
