@class NSString, NSData, NSDate;

@interface WFTriggerEventRealmObject : RLMObject <WFRecordStorage>

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *triggerID;
@property (copy, nonatomic) NSData *eventInfo;
@property (copy, nonatomic) NSDate *dateCreated;
@property (nonatomic) BOOL confirmed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)primaryKey;
+ (id)requiredProperties;

- (void).cxx_destruct;
- (id)descriptor;

@end
