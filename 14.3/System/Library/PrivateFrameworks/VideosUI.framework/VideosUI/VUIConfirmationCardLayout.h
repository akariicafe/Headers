@class TVImageLayout, VUITextLayout;

@interface VUIConfirmationCardLayout : TVViewLayout

@property (nonatomic) struct TVCornerRadii { double topLeft; double topRight; double bottomLeft; double bottomRight; } borderRadii;
@property (readonly, nonatomic) TVImageLayout *badgeLayout;
@property (readonly, nonatomic) VUITextLayout *textLayout;

+ (id)layoutWithLayout:(id)a0 element:(id)a1;

- (id)init;
- (void).cxx_destruct;

@end
