@class VUITextLayout;

@interface VUIComingSoonCardLayout : TVViewLayout

@property (readonly, nonatomic) VUITextLayout *titleLayout;
@property (readonly, nonatomic) VUITextLayout *textLayout;
@property (nonatomic) struct TVCornerRadii { double topLeft; double topRight; double bottomLeft; double bottomRight; } borderRadii;

+ (id)layoutWithLayout:(id)a0 element:(id)a1;

- (id)init;
- (void).cxx_destruct;

@end
