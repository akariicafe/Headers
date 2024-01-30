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
+ (Class)locationListValueType;
+ (Class)stringListValueType;

- (void)clearSignedListValues;
- (id)dateListValueAtIndex:(unsigned long long)a0;
- (void)setSignedListValues:(long long *)a0 count:(unsigned long long)a1;
- (void)addStringListValue:(id)a0;
- (void)clearStringListValues;
- (void)addDoubleListValue:(double)a0;
- (long long)signedListValueAtIndex:(unsigned long long)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)stringListValuesCount;
- (id)description;
- (void)addDateListValue:(id)a0;
- (unsigned long long)locationListValuesCount;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)clearDoubleListValues;
- (void)addLocationListValue:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)dateListValuesCount;
- (void)clearLocationListValues;
- (double)doubleListValueAtIndex:(unsigned long long)a0;
- (unsigned long long)hash;
- (void)dealloc;
- (id)locationListValueAtIndex:(unsigned long long)a0;
- (void)clearDateListValues;
- (void)addSignedListValue:(long long)a0;
- (void)setDoubleListValues:(double *)a0 count:(unsigned long long)a1;
- (id)dictionaryRepresentation;
- (id)stringListValueAtIndex:(unsigned long long)a0;

@end
