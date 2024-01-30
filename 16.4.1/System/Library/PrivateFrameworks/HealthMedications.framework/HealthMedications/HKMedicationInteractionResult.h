@class NSSet, HKConceptIdentifier;

@interface HKMedicationInteractionResult : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) HKConceptIdentifier *firstIdentifier;
@property (readonly, copy, nonatomic) HKConceptIdentifier *secondIdentifier;
@property (readonly, nonatomic) unsigned long long interactionType;
@property (readonly, copy, nonatomic) NSSet *interactions;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)conceptIdentifiers;
- (id)initWithFirstConceptIdentifier:(id)a0 secondConceptIdentifier:(id)a1 interactionType:(unsigned long long)a2 interactions:(id)a3;

@end
