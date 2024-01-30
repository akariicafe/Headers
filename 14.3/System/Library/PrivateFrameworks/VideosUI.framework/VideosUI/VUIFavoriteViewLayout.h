@class TVImageLayout, VUITextLayout;

@interface VUIFavoriteViewLayout : TVViewLayout

@property (readonly, nonatomic) long long layoutType;
@property (readonly, nonatomic) VUITextLayout *titleTextLayout;
@property (readonly, nonatomic) TVImageLayout *logoImageLayout;
@property (readonly, nonatomic) TVImageLayout *accessoryImageLayout;

+ (id)layoutWithLayout:(id)a0 element:(id)a1;

- (void).cxx_destruct;
- (id)initWithType:(long long)a0;

@end
