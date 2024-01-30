@class NSString, CKDPLocationCoordinate, CKDPRecordReference, CKDPDate, NSMutableArray;

@interface CKDPRecordFieldValueEncryptedValue : PBCodable <NSCopying> {
    struct { double *list; unsigned long long count; unsigned long long size; } _doubleListValues;
    struct { long long *list; unsigned long long count; unsigned long long size; } _signedListValues;
    struct { unsigned char doubleValue : 1; unsigned char signedValue : 1; } _has;
}

@property (nonatomic) BOOL hasSignedValue;
@property (nonatomic) long long signedValue;
@property (nonatomic) BOOL hasDoubleValue;
@property (nonatomic) double doubleValue;
@property (readonly, nonatomic) BOOL hasDateValue;
@property (retain, nonatomic) CKDPDate *dateValue;
@property (readonly, nonatomic) BOOL hasStringValue;
@property (retain, nonatomic) NSString *stringValue;
@property (readonly, nonatomic) BOOL hasLocationValue;
@property (retain, nonatomic) CKDPLocationCoordinate *locationValue;
@property (readonly, nonatomic) BOOL hasReferenceValue;
@property (retain, nonatomic) CKDPRecordReference *referenceValue;
@property (readonly, nonatomic) unsigned long long signedListValuesCount;
@property (readonly, nonatomic) long long *signedListValues;
@property (readonly, nonatomic) unsigned long long doubleListValuesCount;
@property (readonly, nonatomic) double *doubleListValues;
@property (retain, nonatomic) NSMutableArray *dateListValues;
@property (retain, nonatomic) NSMutableArray *stringListValues;
@property (retain, nonatomic) NSMutableArray *locationListValues;

+ (Class)dateListValueType;
+ (Class)stringListValueType;
+ (Class)locationListValueType;

- (void)addLocationListValue:(id)a0;
- (void)clearLocationListValues;
- (void)addSignedListValue:(long long)a0;
- (id)dateListValueAtIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (long long)signedListValueAtIndex:(unsigned long long)a0;
- (void)dealloc;
- (unsigned long long)locationListValuesCount;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (id)stringListValueAtIndex:(unsigned long long)a0;
- (void)writeTo:(id)a0;
- (id)locationListValueAtIndex:(unsigned long long)a0;
- (double)doubleListValueAtIndex:(unsigned long long)a0;
- (id)description;
- (void)addDateListValue:(id)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)addDoubleListValue:(double)a0;
- (void)clearSignedListValues;
- (void)setSignedListValues:(long long *)a0 count:(unsigned long long)a1;
- (void)addStringListValue:(id)a0;
- (void)setDoubleListValues:(double *)a0 count:(unsigned long long)a1;
- (unsigned long long)dateListValuesCount;
- (unsigned long long)stringListValuesCount;
- (void)clearStringListValues;
- (void)clearDateListValues;
- (void)clearDoubleListValues;

@end
