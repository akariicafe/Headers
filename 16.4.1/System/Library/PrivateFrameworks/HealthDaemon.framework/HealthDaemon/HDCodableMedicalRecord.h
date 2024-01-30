@class NSString, HDCodableSemanticDate, HDCodableFHIRIdentifier, HDCodableSample;

@interface HDCodableMedicalRecord : PBCodable <HDDecoding, NSCopying> {
    struct { unsigned char extractionVersion : 1; unsigned char modifiedDate : 1; unsigned char state : 1; unsigned char enteredInError : 1; } _has;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL hasSample;
@property (retain, nonatomic) HDCodableSample *sample;
@property (readonly, nonatomic) BOOL hasNote;
@property (retain, nonatomic) NSString *note;
@property (nonatomic) BOOL hasEnteredInError;
@property (nonatomic) BOOL enteredInError;
@property (nonatomic) BOOL hasModifiedDate;
@property (nonatomic) double modifiedDate;
@property (readonly, nonatomic) BOOL hasFHIRIdentifier;
@property (retain, nonatomic) HDCodableFHIRIdentifier *fHIRIdentifier;
@property (readonly, nonatomic) BOOL hasSortDate;
@property (retain, nonatomic) HDCodableSemanticDate *sortDate;
@property (nonatomic) BOOL hasExtractionVersion;
@property (nonatomic) long long extractionVersion;
@property (readonly, nonatomic) BOOL hasLocale;
@property (retain, nonatomic) NSString *locale;
@property (readonly, nonatomic) BOOL hasCountry;
@property (retain, nonatomic) NSString *country;
@property (nonatomic) BOOL hasState;
@property (nonatomic) long long state;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)applyToObject:(id)a0;

@end
