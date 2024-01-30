@class NSXPCInterface;

@interface NFSecureTransactionServicesHandoverBaseSessionCallbacksInterface : NSObject

@property (readonly, nonatomic) NSXPCInterface *protocolInterface;

+ (id)interface;

- (id)initWithProtocol:(id)a0;
- (void)setupInterface;
- (void).cxx_destruct;

@end
