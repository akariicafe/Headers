@class NSString;

@interface BSMachPortRight : NSObject <BSXPCCoding, NSSecureCoding, BSInvalidatable> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    unsigned int _lock_port;
    unsigned int _rawPort;
    int _owner;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *trace;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_rightDescription;
+ (id)_descriptionForPort:(unsigned int)a0 owner:(int)a1 tag:(id)a2 trace:(id)a3;
+ (struct _xpc_type_s { } *)_decodeType;
+ (void)_unsafe_destroyPort:(unsigned int)a0;
+ (unsigned int)_unsafe_decodePort:(id)a0;
+ (BOOL)_unsafe_isUsablePort:(unsigned int)a0;

- (unsigned int)port;
- (id)initWithXPCDictionary:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)isUsable;
- (id)initWithCoder:(id)a0;
- (id)_lock_encodePort:(unsigned int)a0;
- (void)encodeWithXPCDictionary:(id)a0;
- (void)invalidate;
- (void)encodeWithCoder:(id)a0;
- (unsigned int)rawPort;

@end
