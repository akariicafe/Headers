@class NSUUID, SISchemaTopLevelUnionType;

@interface SiriAnalyticsTimeAnnotatedMessage : NSObject

@property (nonatomic) unsigned long long timestamp;
@property (retain, nonatomic) NSUUID *streamUUID;
@property (retain, nonatomic) SISchemaTopLevelUnionType *message;

- (void).cxx_destruct;

@end
