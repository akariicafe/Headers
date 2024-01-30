@class NSUUID, NSString, NSArray, HKInspectableValueCollection, NSLocale, HKMedicalDate, HKConcept, HKDiagnosticTestResultType, HKMedicalCoding;

@interface HKDiagnosticTestResult : HKMedicalRecord <HKConceptIndexable, NSSecureCoding, NSCopying> {
    NSArray *_diagnosticTestCodings;
    HKInspectableValueCollection *_value;
    NSArray *_referenceRanges;
    HKMedicalDate *_effectiveStartDate;
    NSString *_category;
    HKMedicalDate *_issueDate;
    HKMedicalDate *_effectiveEndDate;
    HKMedicalCoding *_statusCoding;
    NSArray *_interpretationCodings;
    NSString *_comments;
    NSArray *_bodySiteCodings;
    NSArray *_methodCodings;
    NSArray *_performers;
    HKConcept *_diagnosticTest;
    HKConcept *_status;
    HKConcept *_interpretation;
    HKConcept *_bodySite;
    HKConcept *_method;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSUUID *UUID;
@property (readonly, copy, nonatomic) NSLocale *locale;
@property (readonly, copy, nonatomic) NSString *country;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) HKDiagnosticTestResultType *diagnosticTestResultType;
@property (readonly, copy) HKConcept *bodySite;
@property (readonly, copy) NSArray *bodySiteCodings;
@property (readonly, copy) NSString *category;
@property (readonly, copy) NSString *comments;
@property (readonly, copy) HKConcept *diagnosticTest;
@property (readonly, copy) NSArray *diagnosticTestCodings;
@property (readonly, copy) HKMedicalDate *effectiveEndDate;
@property (readonly, copy) HKMedicalDate *effectiveStartDate;
@property (readonly, copy) HKConcept *interpretation;
@property (readonly, copy) NSArray *interpretationCodings;
@property (readonly, copy) HKMedicalDate *issueDate;
@property (readonly, copy) HKConcept *method;
@property (readonly, copy) NSArray *methodCodings;
@property (readonly, copy) NSArray *performers;
@property (readonly, copy) NSArray *referenceRanges;
@property (readonly, copy) HKConcept *status;
@property (readonly, copy) HKMedicalCoding *statusCoding;
@property (readonly, copy) HKInspectableValueCollection *value;

+ (id)diagnosticTestResultWithType:(id)a0 note:(id)a1 enteredInError:(BOOL)a2 modifiedDate:(id)a3 FHIRIdentifier:(id)a4 locale:(id)a5 extractionVersion:(long long)a6 device:(id)a7 metadata:(id)a8 sortDate:(id)a9 country:(id)a10 state:(unsigned long long)a11 diagnosticTestCodings:(id)a12 value:(id)a13 referenceRanges:(id)a14 effectiveStartDate:(id)a15 category:(id)a16 issueDate:(id)a17 effectiveEndDate:(id)a18 statusCoding:(id)a19 interpretationCodings:(id)a20 comments:(id)a21 bodySiteCodings:(id)a22 methodCodings:(id)a23 performers:(id)a24;
+ (id)_newDiagnosticTestResultWithType:(id)a0 note:(id)a1 enteredInError:(BOOL)a2 modifiedDate:(id)a3 FHIRIdentifier:(id)a4 locale:(id)a5 extractionVersion:(long long)a6 device:(id)a7 metadata:(id)a8 sortDate:(id)a9 country:(id)a10 state:(unsigned long long)a11 diagnosticTestCodings:(id)a12 value:(id)a13 referenceRanges:(id)a14 effectiveStartDate:(id)a15 category:(id)a16 issueDate:(id)a17 effectiveEndDate:(id)a18 statusCoding:(id)a19 interpretationCodings:(id)a20 comments:(id)a21 bodySiteCodings:(id)a22 methodCodings:(id)a23 performers:(id)a24 config:(id /* block */)a25;
+ (BOOL)supportsEquivalence;
+ (id)diagnosticTestResultWithType:(id)a0 note:(id)a1 enteredInError:(BOOL)a2 modifiedDate:(id)a3 FHIRIdentifier:(id)a4 locale:(id)a5 extractionVersion:(long long)a6 device:(id)a7 metadata:(id)a8 country:(id)a9 state:(unsigned long long)a10 diagnosticTestCodings:(id)a11 value:(id)a12 referenceRanges:(id)a13 effectiveStartDate:(id)a14 category:(id)a15 issueDate:(id)a16 effectiveEndDate:(id)a17 statusCoding:(id)a18 interpretationCodings:(id)a19 comments:(id)a20 bodySiteCodings:(id)a21 methodCodings:(id)a22 performers:(id)a23;
+ (id)indexableConceptKeyPaths;
+ (id)cachedConceptRelationshipKeyPaths;
+ (id)defaultDisplayString;
+ (BOOL)_isConcreteObjectClass;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEquivalent:(id)a0;
- (void)_setStatus:(id)a0;
- (void)_setMethod:(id)a0;
- (id)codingsForKeyPath:(id)a0 error:(id *)a1;
- (BOOL)applyConcepts:(id)a0 forKeyPath:(id)a1 error:(id *)a2;
- (id)initWithCoder:(id)a0;
- (id)statusCodingCollection;
- (id)_validateWithConfiguration:(struct HKObjectValidationConfiguration { unsigned long long x0; unsigned int x1; })a0;
- (void)_setStatusCoding:(id)a0;
- (id)bodySiteCodingsCollection;
- (id)diagnosticTestCodingsCollection;
- (id)interpretationCodingsCollection;
- (id)methodCodingsCollection;
- (void)_setReferenceRanges:(id)a0;
- (void)_setDiagnosticTestCodings:(id)a0;
- (void)_setEffectiveStartDate:(id)a0;
- (void)_setIssueDate:(id)a0;
- (void)_setEffectiveEndDate:(id)a0;
- (void)_setComments:(id)a0;
- (void)_setInterpretationCodings:(id)a0;
- (void)_setBodySiteCodings:(id)a0;
- (void)_setMethodCodings:(id)a0;
- (void)_setPerformers:(id)a0;
- (void)_setInterpretation:(id)a0;
- (void)_setDiagnosticTest:(id)a0;
- (id)medicalRecordCodings;
- (void)_setValue:(id)a0;
- (void)_setBodySite:(id)a0;
- (void)_setCategory:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
