@class NSObject;
@protocol OS_xpc_object;

@interface PLDaemonJobReply : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSObject<OS_xpc_object> *xpcReply;

- (id)initWithReply:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
