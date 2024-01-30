@class HKConcept, NSArray, HKMedicalCoding, HKMedicalDate, HKMedicalCodingCollection, NSString;

@interface HKAllergyReaction : NSObject <NSSecureCoding, NSCopying, HKCodedObject> {
    HKMedicalCoding *_severityCoding;
    HKConcept *_severity;
    NSArray *_manifestations;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSArray *manifestations;
@property (readonly, copy, nonatomic) NSArray *manifestionCodings;
@property (readonly, copy, nonatomic) NSArray *manifestationCodingCollections;
@property (readonly, copy, nonatomic) HKMedicalDate *onsetDate;
@property (readonly, copy, nonatomic) HKConcept *severity;
@property (readonly, copy, nonatomic) HKMedicalCoding *severityCoding;
@property (readonly, copy, nonatomic) HKMedicalCodingCollection *severityCodingCollection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)indexableKeyPathsWithPrefix:(id)a0;
+ (id)allergyReactionWithManifestationCodings:(id)a0 onsetDate:(id)a1 severityCoding:(id)a2;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)codingsForKeyPath:(id)a0 error:(id *)a1;
- (BOOL)applyConcepts:(id)a0 forKeyPath:(id)a1 error:(id *)a2;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithManifestationCodings:(id)a0 onsetDate:(id)a1 severityCoding:(id)a2;
- (id)manifestationCodings;
- (void)_setManifestationCodings:(id)a0;
- (void)_setSeverityCoding:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
