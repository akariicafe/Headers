@class NSString, BCAnnotationRange, NSData;

@interface BCProtoAnnotation : PBCodable <NSCopying> {
    struct { unsigned char locationModificationDate : 1; unsigned char userModificationDate : 1; unsigned char plAbsolutePhysicalLocation : 1; unsigned char plLocationRangeEnd : 1; unsigned char plLocationRangeStart : 1; unsigned char readingProgress : 1; unsigned char readingProgressHighWaterMark : 1; unsigned char style : 1; unsigned char type : 1; unsigned char deleted : 1; unsigned char isUnderline : 1; unsigned char spineIndexUpdated : 1; } _has;
}

@property (nonatomic) double creationDate;
@property (retain, nonatomic) NSString *creatorIdentifier;
@property (nonatomic) BOOL hasDeleted;
@property (nonatomic) BOOL deleted;
@property (nonatomic) BOOL hasIsUnderline;
@property (nonatomic) BOOL isUnderline;
@property (readonly, nonatomic) BOOL hasLocationCFIString;
@property (retain, nonatomic) NSString *locationCFIString;
@property (nonatomic) double modificationDate;
@property (readonly, nonatomic) BOOL hasNote;
@property (retain, nonatomic) NSString *note;
@property (readonly, nonatomic) BOOL hasRepresentativeText;
@property (retain, nonatomic) NSString *representativeText;
@property (readonly, nonatomic) BOOL hasSelectedText;
@property (retain, nonatomic) NSString *selectedText;
@property (nonatomic) BOOL hasStyle;
@property (nonatomic) unsigned int style;
@property (nonatomic) BOOL hasType;
@property (nonatomic) unsigned int type;
@property (retain, nonatomic) NSString *uuid;
@property (readonly, nonatomic) BOOL hasPhysicalPageNumber;
@property (retain, nonatomic) NSString *physicalPageNumber;
@property (readonly, nonatomic) BOOL hasAnnotationVersion;
@property (retain, nonatomic) NSString *annotationVersion;
@property (readonly, nonatomic) BOOL hasAssetVersion;
@property (retain, nonatomic) NSString *assetVersion;
@property (readonly, nonatomic) BOOL hasAttachments;
@property (retain, nonatomic) NSString *attachments;
@property (readonly, nonatomic) BOOL hasChapterTitle;
@property (retain, nonatomic) NSString *chapterTitle;
@property (nonatomic) BOOL hasUserModificationDate;
@property (nonatomic) double userModificationDate;
@property (readonly, nonatomic) BOOL hasSelectedTextRange;
@property (retain, nonatomic) BCAnnotationRange *selectedTextRange;
@property (nonatomic) BOOL hasReadingProgressHighWaterMark;
@property (nonatomic) float readingProgressHighWaterMark;
@property (nonatomic) BOOL hasSpineIndexUpdated;
@property (nonatomic) BOOL spineIndexUpdated;
@property (nonatomic) BOOL hasReadingProgress;
@property (nonatomic) float readingProgress;
@property (readonly, nonatomic) BOOL hasFutureProofing11;
@property (retain, nonatomic) NSString *futureProofing11;
@property (readonly, nonatomic) BOOL hasFutureProofing12;
@property (retain, nonatomic) NSString *futureProofing12;
@property (nonatomic) BOOL hasPlAbsolutePhysicalLocation;
@property (nonatomic) int plAbsolutePhysicalLocation;
@property (nonatomic) BOOL hasPlLocationRangeEnd;
@property (nonatomic) int plLocationRangeEnd;
@property (nonatomic) BOOL hasPlLocationRangeStart;
@property (nonatomic) int plLocationRangeStart;
@property (readonly, nonatomic) BOOL hasPlLocationStorageUUID;
@property (retain, nonatomic) NSString *plLocationStorageUUID;
@property (readonly, nonatomic) BOOL hasPlUserData;
@property (retain, nonatomic) NSData *plUserData;
@property (nonatomic) BOOL hasLocationModificationDate;
@property (nonatomic) double locationModificationDate;

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

@end
