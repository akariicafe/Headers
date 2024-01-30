@class MPIdentifierSet, ICRadioContentReference;

@interface MPCModelRadioContentReference : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) ICRadioContentReference *ICRadioContentReference;
@property (readonly, nonatomic) MPIdentifierSet *referenceModelObjectIdentifiers;

+ (id)referenceWithMPModelObject:(id)a0;
+ (id)referenceWithMPModelObject:(id)a0 containerModelPlayEvent:(id)a1;
+ (id)referenceWithStoreIdentifier:(id)a0 trackInfo:(id)a1;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithICRadioContentReference:(id)a0;

@end
