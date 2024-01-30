@class NSString, NSUserDefaults;

@interface SFSpeechSynthesisInternalSetting : NSObject

@property (retain, nonatomic) NSUserDefaults *defaults;
@property (readonly, nonatomic) NSString *ospreyEndpointURL;
@property (readonly, nonatomic) NSString *deviceId;
@property (readonly, nonatomic) BOOL disableCaching;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;

@end
