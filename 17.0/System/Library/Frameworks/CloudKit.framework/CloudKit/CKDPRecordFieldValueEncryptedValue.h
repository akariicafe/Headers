@class NSString, CKDPLocationCoordinate, CKDPRecordReference, CKDPDate, NSMutableArray;

@interface CKDPRecordFieldValueEncryptedValue : PBCodable <NSCopying> {
    struct { double *list; unsigned long long count; unsigned long long size; } _doubleListValues;
    struct { long long *list; unsigned long long count; unsigned long long size; } _signedListValues;
    struct { unsigned char ckDoubleValue : 1; unsigned char signedValue : 1; } _has;
}

@property (nonatomic) BOOL hasSignedValue;
@property (nonatomic) long long signedValue;
@property (nonatomic) BOOL hasCkDoubleValue;
@property (nonatomic) double ckDoubleValue;
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

- (unsigned long long)hash;
- (void)dealloc;
- (BOOL)readFrom:(id)a0;
- (void)clearDateListValues;
- (void)clearDoubleListValues;
- (double)doubleListValueAtIndex:(unsigned long long)a0;
- (id)stringListValueAtIndex:(unsigned long long)a0;
- (void)writeTo:(id)a0;
- (id)locationListValueAtIndex:(unsigned long long)a0;
- (void)clearStringListValues;
- (void)setDoubleListValues:(double *)a0 count:(unsigned long long)a1;
- (id)description;
- (void)clearSignedListValues;
- (unsigned long long)locationListValuesCount;
- (void)addDoubleListValue:(double)a0;
- (void).cxx_destruct;
- (void)addStringListValue:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)setSignedListValues:(long long *)a0 count:(unsigned long long)a1;
- (void)addLocationListValue:(id)a0;
- (void)addSignedListValue:(long long)a0;
- (BOOL)isEqual:(id)a0;
- (void)clearLocationListValues;
- (void)mergeFrom:(id)a0;
- (void)addDateListValue:(id)a0;
- (unsigned long long)dateListValuesCount;
- (long long)signedListValueAtIndex:(unsigned long long)a0;
- (unsigned long long)stringListValuesCount;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dateListValueAtIndex:(unsigned long long)a0;

@end
