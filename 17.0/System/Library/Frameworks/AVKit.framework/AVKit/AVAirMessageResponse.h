@class NSString;

@interface AVAirMessageResponse : NSObject <AVMessageTransformerProtocol>

@property (readonly, nonatomic) long long status;
@property (readonly, nonatomic) NSString *localizedDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)messageWithParts:(id)a0;
+ (id)messageWithVersion:(id)a0 headers:(id)a1 bodyData:(id)a2;
+ (id)responseWithParts:(id)a0;

- (void).cxx_destruct;
- (id)bodyData;
- (id)headersForContentLength:(long long)a0 compression:(id)a1;
- (id)initWithStatus:(long long)a0 localizedDescription:(id)a1;
- (id)messageDataRepresentation;

@end
