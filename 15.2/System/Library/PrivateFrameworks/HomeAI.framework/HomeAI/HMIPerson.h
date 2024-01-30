@class NSUUID, NSString, NSSet;

@interface HMIPerson : HMFObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSUUID *UUID;
@property (readonly, copy) NSString *name;
@property (readonly, copy) NSSet *personLinks;

+ (id)personFromHomePerson:(id)a0;

- (id)attributeDescriptions;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithUUID:(id)a0 name:(id)a1;
- (id)initWithUUID:(id)a0 name:(id)a1 personLinks:(id)a2;

@end
