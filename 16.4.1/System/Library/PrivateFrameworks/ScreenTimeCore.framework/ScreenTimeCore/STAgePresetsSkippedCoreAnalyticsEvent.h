@class NSString, NSDictionary;

@interface STAgePresetsSkippedCoreAnalyticsEvent : NSObject <STCoreAnalyticsEvent>

@property (readonly) NSString *sessionId;
@property (readonly, copy) NSString *name;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSDictionary *payload;

+ (id)description;

- (void).cxx_destruct;
- (id)initWithSessionId:(id)a0;

@end
