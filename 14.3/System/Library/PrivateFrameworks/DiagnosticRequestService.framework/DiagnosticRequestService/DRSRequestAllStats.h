@class NSDictionary;

@interface DRSRequestAllStats : DRSRequestStats

@property (readonly, nonatomic) NSDictionary *perBuildStats;

+ (id)keyName;
+ (id)statsForRequests:(id)a0;
+ (Class)childStatsClass;
+ (id)descriptionStringForRequest:(id)a0;

- (id)init;
- (id)terminalRequestProtobufRepresentation;

@end
