@class NSString;

@interface SASProximityMigrationTransferPreparationAction : SASProximityAction

@property (retain, nonatomic) NSString *deviceName;

+ (unsigned long long)actionID;
+ (id)actionFromDictionary:(id)a0;

- (void).cxx_destruct;
- (BOOL)hasResponse;
- (id)requestPayload;

@end
