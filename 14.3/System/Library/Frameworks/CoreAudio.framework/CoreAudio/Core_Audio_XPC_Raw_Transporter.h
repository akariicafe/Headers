@class NSObject;
@protocol OS_xpc_object;

@interface Core_Audio_XPC_Raw_Transporter : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSObject<OS_xpc_object> *object;

+ (id)object:(id)a0;

- (void).cxx_destruct;
- (id)initWithObject:(id)a0;
- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
