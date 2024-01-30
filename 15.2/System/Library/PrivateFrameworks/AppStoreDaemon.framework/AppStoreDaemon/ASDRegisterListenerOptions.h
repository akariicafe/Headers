@class NSString, NSXPCConnection;

@interface ASDRegisterListenerOptions : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *clientID;
@property (retain, nonatomic) NSXPCConnection *endpoint;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
