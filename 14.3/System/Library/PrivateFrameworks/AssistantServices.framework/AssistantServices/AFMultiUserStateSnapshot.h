@class NSString, NSNumber, NSArray;

@interface AFMultiUserStateSnapshot : NSObject <AFContextSnapshot, NSCopying, NSSecureCoding, AFDictionaryConvertible>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSNumber *vtSatScore;
@property (readonly, copy, nonatomic) NSArray *confidenceScores;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)newWithBuilder:(id /* block */)a0;

- (id)_descriptionWithIndent:(unsigned long long)a0;
- (id)initWithVtSatScore:(id)a0 confidenceScores:(id)a1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDictionaryRepresentation:(id)a0;
- (id)serializedBackingStore;
- (id)buildDictionaryRepresentation;
- (id)mutatedCopyWithMutator:(id /* block */)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithVtSatScore:(id)a0;
- (id)initWithConfidenceScores:(id)a0;
- (id)ad_shortDescription;
- (id)initWithSerializedBackingStore:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
