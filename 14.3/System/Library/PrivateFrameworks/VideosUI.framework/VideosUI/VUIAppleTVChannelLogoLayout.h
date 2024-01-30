@class TVImageLayout, VUITextLayout;

@interface VUIAppleTVChannelLogoLayout : TVViewLayout

@property (retain, nonatomic) VUITextLayout *channelsTextLayout;
@property (retain, nonatomic) TVImageLayout *channelLogoImageLayout;

+ (id)layoutWithLayout:(id)a0;

- (id)init;
- (void).cxx_destruct;

@end
