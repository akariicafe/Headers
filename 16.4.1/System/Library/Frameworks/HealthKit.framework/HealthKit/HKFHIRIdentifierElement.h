@class HKConcept, NSString, NSArray, HKMedicalCodingCollection;

@interface HKFHIRIdentifierElement : NSObject <NSSecureCoding, NSCopying, HKCodedObject> {
    HKConcept *_type;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *value;
@property (readonly, copy, nonatomic) HKConcept *type;
@property (readonly, copy, nonatomic) NSArray *typeCodings;
@property (readonly, copy, nonatomic) HKMedicalCodingCollection *typeCodingCollection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)identifierWithTypeCodings:(id)a0 value:(id)a1;
+ (id)indexableKeyPathsWithPrefix:(id)a0;

- (void)_setType:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (BOOL)applyConcepts:(id)a0 forKeyPath:(id)a1 error:(id *)a2;
- (void)_setTypeCodings:(id)a0;
- (id)codingsForKeyPath:(id)a0 error:(id *)a1;
- (id)initWithTypeCodings:(id)a0 value:(id)a1;

@end
