@class NSString, NSMutableArray;

@interface HKCodableHealthRecordsIndividualRecord : PBCodable <NSCopying> {
    struct { unsigned char dateData : 1; } _has;
}

@property (retain, nonatomic) NSMutableArray *codes;
@property (readonly, nonatomic) BOOL hasRecordTitle;
@property (retain, nonatomic) NSString *recordTitle;
@property (nonatomic) BOOL hasDateData;
@property (nonatomic) double dateData;
@property (retain, nonatomic) NSMutableArray *valueWithRanges;
@property (readonly, nonatomic) BOOL hasTextualValue;
@property (retain, nonatomic) NSString *textualValue;
@property (readonly, nonatomic) BOOL hasUcumUnitString;
@property (retain, nonatomic) NSString *ucumUnitString;
@property (readonly, nonatomic) BOOL hasProviderURI;
@property (retain, nonatomic) NSString *providerURI;
@property (readonly, nonatomic) BOOL hasRecordUUID;
@property (retain, nonatomic) NSString *recordUUID;

+ (Class)codeType;
+ (Class)valueWithRangeType;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (void)addCode:(id)a0;
- (id)dictionaryRepresentation;
- (void)addValueWithRange:(id)a0;
- (unsigned long long)codesCount;
- (void)clearCodes;
- (id)codeAtIndex:(unsigned long long)a0;
- (unsigned long long)valueWithRangesCount;
- (void)clearValueWithRanges;
- (id)valueWithRangeAtIndex:(unsigned long long)a0;

@end
