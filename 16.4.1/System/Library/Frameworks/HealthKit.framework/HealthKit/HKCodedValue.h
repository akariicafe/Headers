@class HKConcept, NSArray, HKInspectableValue, NSString;

@interface HKCodedValue : NSObject <NSSecureCoding, NSCopying, HKCodedObject> {
    HKConcept *_concept;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSArray *codings;
@property (readonly, copy, nonatomic) HKConcept *concept;
@property (readonly, copy, nonatomic) HKInspectableValue *value;
@property (readonly, copy, nonatomic) NSArray *referenceRanges;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)codedValueWithCodings:(id)a0 value:(id)a1 referenceRanges:(id)a2;
+ (id)indexableKeyPathsWithPrefix:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (BOOL)applyConcepts:(id)a0 forKeyPath:(id)a1 error:(id *)a2;
- (void)_setConcept:(id)a0;
- (id)chartableCodedQuantitySetWithDate:(id)a0 error:(id *)a1;
- (id)chartableCodedQuantityWithError:(id *)a0;
- (id)codingsForKeyPath:(id)a0 error:(id *)a1;
- (id)initWithCodings:(id)a0 value:(id)a1 referenceRanges:(id)a2;

@end
