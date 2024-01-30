@class NSObject;
@protocol OS_xpc_object;

@interface PKXPCObject : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSObject<OS_xpc_object> *object;

+ (id)object:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithObject:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
