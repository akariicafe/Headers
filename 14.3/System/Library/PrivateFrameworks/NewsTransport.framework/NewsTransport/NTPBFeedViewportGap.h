@class NTPBFeedRefreshSessionForYouConfig, NSString, NTPBDate, NTPBFeedViewportEdition, NSMutableArray;

@interface NTPBFeedViewportGap : PBCodable <NSCopying> {
    struct { int *list; unsigned long long count; unsigned long long size; } _activeGroupEmitterIDRefs;
    struct { int *list; unsigned long long count; unsigned long long size; } _groupEmitterIDRefs;
    struct { unsigned char isOffline : 1; unsigned char reachedEnd : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasIdentifier;
@property (retain, nonatomic) NSString *identifier;
@property (readonly, nonatomic) BOOL hasRefreshDate;
@property (retain, nonatomic) NTPBDate *refreshDate;
@property (readonly, nonatomic) BOOL hasModificationDate;
@property (retain, nonatomic) NTPBDate *modificationDate;
@property (nonatomic) BOOL hasReachedEnd;
@property (nonatomic) BOOL reachedEnd;
@property (readonly, nonatomic) unsigned long long groupEmitterIDRefsCount;
@property (readonly, nonatomic) int *groupEmitterIDRefs;
@property (retain, nonatomic) NSMutableArray *cursors;
@property (readonly, nonatomic) BOOL hasLastCompletedEdition;
@property (retain, nonatomic) NTPBFeedViewportEdition *lastCompletedEdition;
@property (retain, nonatomic) NSMutableArray *pendingGroups;
@property (readonly, nonatomic) unsigned long long activeGroupEmitterIDRefsCount;
@property (readonly, nonatomic) int *activeGroupEmitterIDRefs;
@property (nonatomic) BOOL hasIsOffline;
@property (nonatomic) BOOL isOffline;
@property (readonly, nonatomic) BOOL hasForYouConfig;
@property (retain, nonatomic) NTPBFeedRefreshSessionForYouConfig *forYouConfig;

+ (Class)cursorsType;
+ (Class)pendingGroupsType;

- (void)setGroupEmitterIDRefs:(int *)a0 count:(unsigned long long)a1;
- (void)clearPendingGroups;
- (void)setActiveGroupEmitterIDRefs:(int *)a0 count:(unsigned long long)a1;
- (int)groupEmitterIDRefAtIndex:(unsigned long long)a0;
- (id)pendingGroupsAtIndex:(unsigned long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (int)activeGroupEmitterIDRefsAtIndex:(unsigned long long)a0;
- (void)addCursors:(id)a0;
- (void)dealloc;
- (BOOL)readFrom:(id)a0;
- (void)addPendingGroups:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)clearGroupEmitterIDRefs;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)clearCursors;
- (unsigned long long)cursorsCount;
- (void)clearActiveGroupEmitterIDRefs;
- (unsigned long long)pendingGroupsCount;
- (void)addGroupEmitterIDRef:(int)a0;
- (id)cursorsAtIndex:(unsigned long long)a0;
- (void)addActiveGroupEmitterIDRefs:(int)a0;

@end
