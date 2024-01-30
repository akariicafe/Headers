@class NSString;

@interface JFXAnalyticsManager : NSObject <JFXAnalytics>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)allIncrementScalarEvents;
+ (id)bundleForAnalytics;

- (id)init;
- (void)trackEventWithName:(id)a0;
- (BOOL)checkIfEventExistsWithName:(id)a0;
- (id)fullKeyFromEvent:(id)a0;
- (void)trackKey:(id)a0 withCount:(unsigned long long)a1;
- (void)trackKey:(id)a0 withPayload:(id)a1;
- (id)dictionaryWithEventName:(id)a0 value:(double)a1;
- (BOOL)isIncrementScalar:(id)a0;

@end
