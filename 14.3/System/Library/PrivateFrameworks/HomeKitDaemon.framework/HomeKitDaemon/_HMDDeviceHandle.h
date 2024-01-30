@class NSUUID, NSString, HMDAccountHandle;

@interface _HMDDeviceHandle : HMFObject <NSCopying, NSSecureCoding>

@property (class, readonly) NSUUID *identifierNamespace;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSUUID *identifier;
@property (readonly, getter=isLocal) BOOL local;
@property (readonly, getter=isGlobal) BOOL global;
@property (readonly, copy) HMDAccountHandle *accountHandle;
@property (readonly, copy) NSString *destination;

+ (BOOL)isValidDestination:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDestination:(id)a0;
- (id)initWithIdentifier:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
