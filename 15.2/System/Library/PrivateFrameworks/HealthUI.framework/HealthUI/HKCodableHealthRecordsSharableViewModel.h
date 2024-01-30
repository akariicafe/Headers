@class NSString, HKCodableHealthRecordsEduContent, HKCodableHealthRecordsIndividualRecord, NSMutableArray;

@interface HKCodableHealthRecordsSharableViewModel : PBCodable <NSCopying> {
    struct { unsigned char category : 1; unsigned char latestSupportedVersion : 1; unsigned char minimumSupportedVersion : 1; unsigned char isPinned : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasConceptIdentifier;
@property (retain, nonatomic) NSString *conceptIdentifier;
@property (nonatomic) BOOL hasCategory;
@property (nonatomic) long long category;
@property (readonly, nonatomic) BOOL hasPreferredName;
@property (retain, nonatomic) NSString *preferredName;
@property (readonly, nonatomic) BOOL hasEduContent;
@property (retain, nonatomic) HKCodableHealthRecordsEduContent *eduContent;
@property (nonatomic) BOOL hasIsPinned;
@property (nonatomic) BOOL isPinned;
@property (readonly, nonatomic) BOOL hasLatestRecord;
@property (retain, nonatomic) HKCodableHealthRecordsIndividualRecord *latestRecord;
@property (retain, nonatomic) NSMutableArray *allRecords;
@property (nonatomic) BOOL hasLatestSupportedVersion;
@property (nonatomic) long long latestSupportedVersion;
@property (nonatomic) BOOL hasMinimumSupportedVersion;
@property (nonatomic) long long minimumSupportedVersion;

+ (Class)allRecordsType;

- (void)clearAllRecords;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (void)addAllRecords:(id)a0;
- (unsigned long long)allRecordsCount;
- (id)allRecordsAtIndex:(unsigned long long)a0;

@end
