@class NSString, NSDictionary;

@interface IDSWiFiSetupAttemptMetric : NSObject <CUTCoreAnalyticsMetric>

@property (readonly, nonatomic) unsigned long long attemptType;
@property (readonly, nonatomic) unsigned long long msDuration;
@property (readonly, nonatomic) unsigned long long result;
@property (readonly, nonatomic) NSString *client;
@property (readonly) NSDictionary *dictionaryRepresentation;
@property (readonly) NSString *name;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithAttemptType:(unsigned long long)a0 msDuration:(unsigned long long)a1 result:(unsigned long long)a2 client:(id)a3;

@end
