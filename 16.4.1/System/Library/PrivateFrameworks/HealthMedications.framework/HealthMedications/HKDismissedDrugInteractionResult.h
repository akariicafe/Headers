@class HKConceptIdentifier, NSDate;

@interface HKDismissedDrugInteractionResult : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) HKConceptIdentifier *interactionIdentifier;
@property (readonly, nonatomic) HKConceptIdentifier *firstDrugClassIdentifier;
@property (readonly, nonatomic) HKConceptIdentifier *firstDrugClassAncestorIdentifier;
@property (readonly, nonatomic) HKConceptIdentifier *secondDrugClassIdentifier;
@property (readonly, nonatomic) HKConceptIdentifier *secondDrugClassAncestorIdentifier;
@property (readonly, nonatomic) NSDate *creationDate;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)_initWithDrugInteractionResult:(id)a0;
- (BOOL)isEqualToDrugInteractionResult:(id)a0;
- (id)_initWithInteractionIdentifier:(id)a0 firstDrugClassIdentifier:(id)a1 firstDrugClassAncestorIdentifier:(id)a2 secondDrugClassIdentifier:(id)a3 secondDrugClassAncestorIdentifier:(id)a4 creationDate:(id)a5;

@end
