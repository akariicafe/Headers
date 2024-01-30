@class NSString;

@interface MTSyncUtil : NSObject

@property (class, retain, nonatomic) NSString *podcastsDomainVersion;

+ (void)setSyncDirtyFlag:(BOOL)a0;
+ (BOOL)syncDirtyFlag;
+ (void)setPlaylistSyncDirtyFlag:(BOOL)a0;
+ (BOOL)playlistSyncDirtyFlag;
+ (BOOL)isSubscriptionSyncEnabled;

@end
