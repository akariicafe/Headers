@class VUIDownloadConfig, VUIPostPlayConfig, VUINowPlayingConfig, VUIAutoPlayConfig, VUIInAppMessagesConfig;

@interface VUIFeaturesConfiguration : NSObject

@property (readonly, nonatomic) VUIPostPlayConfig *postPlayConfig;
@property (readonly, nonatomic) VUINowPlayingConfig *nowPlayingConfig;
@property (readonly, nonatomic) VUIAutoPlayConfig *autoPlayConfig;
@property (readonly, nonatomic) VUIInAppMessagesConfig *inAppMessagesConfig;
@property (readonly, nonatomic) VUIDownloadConfig *downloadConfig;

+ (id)sharedInstance;

- (void)updateWithDictionary:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
