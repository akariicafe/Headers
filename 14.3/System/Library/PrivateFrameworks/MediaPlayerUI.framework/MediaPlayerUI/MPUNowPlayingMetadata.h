@class NSDictionary, NSString;

@interface MPUNowPlayingMetadata : NSObject

@property (readonly, nonatomic) NSDictionary *nowPlayingInfo;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *artist;
@property (readonly, nonatomic) NSString *album;
@property (readonly, nonatomic) NSString *radioStationName;
@property (readonly, nonatomic) double elapsedTime;
@property (readonly, nonatomic) double duration;
@property (readonly, nonatomic) float playbackRate;
@property (readonly, nonatomic) unsigned long long persistentID;
@property (readonly, nonatomic) NSString *radioStationIdentifier;
@property (readonly, nonatomic, getter=isMusicApp) BOOL musicApp;
@property (readonly, nonatomic, getter=isAlwaysLive) BOOL alwaysLive;
@property (readonly, nonatomic, getter=isExplicitContent) BOOL explicitContent;

- (void).cxx_destruct;
- (id)initWithMediaRemoteNowPlayingInfo:(id)a0;

@end
