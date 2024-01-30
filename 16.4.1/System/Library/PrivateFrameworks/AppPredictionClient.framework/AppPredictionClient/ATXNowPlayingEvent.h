@class NSString;

@interface ATXNowPlayingEvent : NSObject

@property (readonly, nonatomic) NSString *bundleId;
@property (readonly, nonatomic) long long nowPlayingState;

- (void).cxx_destruct;
- (id)initWithContextInfo:(id)a0;
- (BOOL)isTVExperienceAppNowPlaying;

@end
