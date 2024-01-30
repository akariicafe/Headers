@class NSString;

@interface BSMachPortRight : NSObject <BSXPCCoding, NSSecureCoding, BSInvalidatable> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _invalidationLock;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    unsigned int _lock_port;
    unsigned int _rawPort;
    char _type;
    char _owner;
    unsigned char _lock_accessCount;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *trace;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (char)_type;

- (id)initWithXPCDictionary:(id)a0;
- (void)encodeWithXPCDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)accessPort:(id /* block */)a0;
- (unsigned int)extractPortAndIKnowWhatImDoingISwear;
- (BOOL)matchesPortOfRight:(id)a0;
- (unsigned int)extractPort;
- (unsigned int)rawPort;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void)invalidate;
- (BOOL)isUsable;
- (unsigned int)port;
- (void)dealloc;
- (BOOL)isValid;

@end
