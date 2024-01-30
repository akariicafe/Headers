@class NSString, NSMutableArray;

@interface MNTracePlaybackDetails : PBCodable <NSCopying> {
    struct { unsigned char currentPosition : 1; unsigned char pedestrianTraceStartRelativeTimestamp : 1; unsigned char traceDuration : 1; unsigned char eventType : 1; unsigned char recordedBookmarkID : 1; } _has;
}

@property (nonatomic) BOOL hasEventType;
@property (nonatomic) int eventType;
@property (readonly, nonatomic) BOOL hasTracePath;
@property (retain, nonatomic) NSString *tracePath;
@property (nonatomic) BOOL hasTraceDuration;
@property (nonatomic) double traceDuration;
@property (nonatomic) BOOL hasCurrentPosition;
@property (nonatomic) double currentPosition;
@property (retain, nonatomic) NSMutableArray *bookmarks;
@property (nonatomic) BOOL hasRecordedBookmarkID;
@property (nonatomic) unsigned int recordedBookmarkID;
@property (readonly, nonatomic) BOOL hasPedestrianTracePath;
@property (retain, nonatomic) NSString *pedestrianTracePath;
@property (nonatomic) BOOL hasPedestrianTraceStartRelativeTimestamp;
@property (nonatomic) double pedestrianTraceStartRelativeTimestamp;

+ (Class)bookmarkType;

- (id)eventTypeAsString:(int)a0;
- (int)StringAsEventType:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)bookmarkAtIndex:(unsigned long long)a0;
- (void)addBookmark:(id)a0;
- (unsigned long long)bookmarksCount;
- (void)clearBookmarks;

@end
