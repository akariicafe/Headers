@class NSString, NSMutableDictionary, NSDictionary;

@interface HLPAnalyticsEventController : NSObject

@property (retain, nonatomic) NSMutableDictionary *countersByKey;
@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSString *version;
@property (readonly, nonatomic) NSDictionary *requiredKeys;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)logAnalyticsEvent:(id)a0;
- (void)configureWithHelpBookID:(id)a0 version:(id)a1;
- (void)incrementCounterForKey:(id)a0;
- (id)counterForKey:(id)a0;

@end
