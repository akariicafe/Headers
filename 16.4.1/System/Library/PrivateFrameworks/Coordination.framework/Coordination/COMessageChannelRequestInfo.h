@class NSString, COMessageChannelRequest;

@interface COMessageChannelRequestInfo : NSObject

@property (readonly, nonatomic) long long requestType;
@property (readonly, nonatomic) unsigned int requestID;
@property (nonatomic) unsigned long long expectedRecipients;
@property (nonatomic) unsigned long long receivedResponses;
@property (retain, nonatomic) COMessageChannelRequest *request;
@property (copy, nonatomic) NSString *destinationInfo;
@property (nonatomic) unsigned long long messageSize;
@property (copy, nonatomic) id /* block */ recipientCallback;
@property (copy, nonatomic) id /* block */ responseCallback;

- (void).cxx_destruct;
- (id)initWithRequestID:(unsigned int)a0 type:(long long)a1 request:(id)a2;

@end
