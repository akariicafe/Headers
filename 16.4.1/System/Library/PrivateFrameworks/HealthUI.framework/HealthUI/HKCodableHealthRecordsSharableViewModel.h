@class NSString, HKCodableHealthRecordsEduContent, HKCodableHealthRecordsLocalizedEducationContent, HKCodableHealthRecordsIndividualRecord, NSMutableArray;

@interface HKCodableHealthRecordsSharableViewModel : PBCodable <NSCopying> {
    struct APPLE_151 { unsigned char category : 1; unsigned char latestSupportedVersion : 1; unsigned char minimumSupportedVersion : 1; unsigned char isPinned : 1; } _has;
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
@property (readonly, nonatomic) BOOL hasLocalizedEducationContent;
@property (retain, nonatomic) HKCodableHealthRecordsLocalizedEducationContent *localizedEducationContent;
@property (readonly, nonatomic) BOOL hasLatestRecord;
@property (retain, nonatomic) HKCodableHealthRecordsIndividualRecord *latestRecord;
@property (retain, nonatomic) NSMutableArray *allRecords;
@property (nonatomic) BOOL hasLatestSupportedVersion;
@property (nonatomic) long long latestSupportedVersion;
@property (nonatomic) BOOL hasMinimumSupportedVersion;
@property (nonatomic) long long minimumSupportedVersion;

+ (Class)allRecordsType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)clearAllRecords;
- (void).cxx_destruct;
- (unsigned long long)allRecordsCount;
- (void)addAllRecords:(id)a0;
- (id)allRecordsAtIndex:(unsigned long long)a0;

@end
