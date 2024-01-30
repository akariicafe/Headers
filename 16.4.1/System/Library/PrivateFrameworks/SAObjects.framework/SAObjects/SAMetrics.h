@class NSString, NSDictionary;

@interface SAMetrics : SABaseCommand <SAServerBoundCommand>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *assistantId;
@property (copy, nonatomic) NSString *category;
@property (copy, nonatomic) NSDictionary *eventInformation;
@property (copy, nonatomic) NSString *originalCommandId;
@property (copy, nonatomic) NSString *speechId;
@property (copy, nonatomic) NSDictionary *timings;
@property (copy, nonatomic) NSString *aceId;
@property (copy, nonatomic) NSString *refId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)metrics;
+ (id)metricsWithDictionary:(id)a0 context:(id)a1;

@end
