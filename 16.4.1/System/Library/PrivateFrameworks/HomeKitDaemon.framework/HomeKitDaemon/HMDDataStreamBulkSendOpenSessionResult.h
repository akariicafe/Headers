@class NSDictionary;
@protocol HMDDataStreamBulkSendSession;

@interface HMDDataStreamBulkSendOpenSessionResult : NSObject

@property (readonly, nonatomic) id<HMDDataStreamBulkSendSession> session;
@property (readonly, nonatomic) NSDictionary *payload;

- (id)attributeDescriptions;
- (void).cxx_destruct;
- (id)initWithSession:(id)a0 payload:(id)a1;

@end
