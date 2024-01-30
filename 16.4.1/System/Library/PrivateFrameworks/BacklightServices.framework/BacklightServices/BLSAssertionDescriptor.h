@class NSString, NSArray;

@interface BLSAssertionDescriptor : NSObject <NSCopying, NSSecureCoding, BSXPCCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *explanation;
@property (readonly, copy, nonatomic) NSArray *attributes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithXPCDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithXPCDictionary:(id)a0;
- (id)initWithExplanation:(id)a0 attributes:(id)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)attributeOfClass:(Class)a0;
- (BOOL)checkEntitlementSourceForRequiredEntitlements:(id)a0 error:(out id *)a1;
- (void).cxx_destruct;
- (id)attributesOfClasses:(id)a0;

@end
