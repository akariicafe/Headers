@class SiriAnalyticsLogicalTimeStamp, SISchemaTopLevelUnionType;

@interface SiriAnalyticsMessage : NSObject

@property (retain, nonatomic) SiriAnalyticsLogicalTimeStamp *logicalTimestamp;
@property (retain, nonatomic) SISchemaTopLevelUnionType *underlyingMessage;

- (void).cxx_destruct;
- (id)storageRepresentation;

@end
