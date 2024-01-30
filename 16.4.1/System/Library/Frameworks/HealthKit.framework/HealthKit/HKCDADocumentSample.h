@class HKCDADocument;

@interface HKCDADocumentSample : HKDocumentSample {
    long long _omittedContentFlags;
}

@property (readonly) HKCDADocument *document;

+ (BOOL)supportsSecureCoding;
+ (BOOL)_isConcreteObjectClass;
+ (id)CDADocumentSampleWithData:(id)a0 startDate:(id)a1 endDate:(id)a2 metadata:(id)a3 validationError:(id *)a4;
+ (id)_comparisonExpressionForValue:(id)a0 operatorType:(unsigned long long)a1;
+ (id)_globStringToRegexString:(id)a0;
+ (BOOL)_isValidCDAKeyPath:(id)a0;
+ (BOOL)_isValidOperatorType:(unsigned long long)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_validateWithConfiguration:(struct HKObjectValidationConfiguration { unsigned long long x0; unsigned int x1; })a0;
- (id)description;
- (void).cxx_destruct;
- (void)_applyPropertiesWithOmittedFlags:(long long)a0 compressedDocumentData:(id)a1 title:(id)a2 patientName:(id)a3 authorName:(id)a4 custodianName:(id)a5;
- (id)_fieldValueForKeyPath:(id)a0;
- (long long)_omittedContentFlags;
- (BOOL)_predicateMatchForKeyPath:(id)a0 pattern:(id)a1;
- (void)_processDocumentData:(id)a0 extractedFields:(id)a1;
- (BOOL)_validateDocumentContentWithError:(id *)a0;
- (BOOL)prepareForDelivery:(id *)a0;
- (BOOL)prepareForSaving:(id *)a0;

@end
