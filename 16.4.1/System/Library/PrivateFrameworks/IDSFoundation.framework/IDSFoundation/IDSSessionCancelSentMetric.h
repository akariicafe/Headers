@class NSString, NSNumber, NSDictionary;

@interface IDSSessionCancelSentMetric : NSObject <CUTCoreAnalyticsMetric>

@property (readonly, nonatomic) NSString *guid;
@property (readonly, nonatomic) NSNumber *numberOfRecipients;
@property (readonly, nonatomic) unsigned int remoteSessionEndReason;
@property (readonly) NSDictionary *dictionaryRepresentation;
@property (readonly) NSString *name;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithGuid:(id)a0 numberOfRecipients:(id)a1 remoteSessionEndReason:(unsigned int)a2;

@end
