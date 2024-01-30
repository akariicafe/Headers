@class NSString;

@interface CSAudioPlayingApp : NSObject

@property (readonly, nonatomic) NSString *bundleId;
@property (readonly, nonatomic) NSString *appName;
@property (readonly, nonatomic) NSString *version;

- (id)initWithPid:(int)a0;
- (void).cxx_destruct;

@end
