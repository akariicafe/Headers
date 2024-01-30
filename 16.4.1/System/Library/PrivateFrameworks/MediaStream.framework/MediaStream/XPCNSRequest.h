@class XPCRequest, NSData;
@protocol NSCoding;

@interface XPCNSRequest : NSObject

@property (readonly, retain, nonatomic) XPCRequest *request;
@property (readonly, retain, nonatomic) id<NSCoding> message;
@property (readonly, retain, nonatomic) NSData *data;

- (void)sendReply:(id)a0;
- (id)initWithXPCRequest:(id)a0;
- (void).cxx_destruct;

@end
