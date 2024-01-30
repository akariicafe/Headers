@class TVImageLayout, VUITextLayout;

@interface VUIProductInfoAiringLayout : TVViewLayout

@property (readonly, nonatomic) VUITextLayout *infoTextLayout;
@property (readonly, nonatomic) TVImageLayout *logoImageLayout;

+ (id)layoutWithLayout:(id)a0 element:(id)a1;

- (id)init;
- (void).cxx_destruct;

@end
