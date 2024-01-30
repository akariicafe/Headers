@interface MTShowSettings : NSObject

@property (nonatomic) long long showType;
@property (nonatomic) BOOL autoDownloadEnabled;
@property (nonatomic) long long episodeLimit;
@property (nonatomic) BOOL enableNotifications;
@property (nonatomic) int hidePlayedEpisode;
@property (nonatomic) long long deletePlayedDownloads;

@end
