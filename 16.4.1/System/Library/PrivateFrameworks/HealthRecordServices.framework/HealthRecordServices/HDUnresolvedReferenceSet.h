@class NSSet, HDFHIRResourceObject;

@interface HDUnresolvedReferenceSet : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSSet *references;
@property (readonly, nonatomic) HDFHIRResourceObject *resource;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithReferences:(id)a0 resource:(id)a1;

@end
