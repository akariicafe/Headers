@class MSPHistoryEntryStorage, NSString, MSPBookmarkStorage, MSPPinStorage, PBUnknownFields;

@interface MSPCompanionSyncedItem : PBCodable <SYObject, SYChange, NSCopying> {
    PBUnknownFields *_unknownFields;
    struct { unsigned char changeType : 1; } _has;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) long long syChangeType;
@property (readonly, nonatomic) NSString *objectIdentifier;
@property (readonly, nonatomic) NSString *sequencer;
@property (readonly, nonatomic) long long changeType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL hasSyncId;
@property (retain, nonatomic) NSString *syncId;
@property (nonatomic) BOOL hasChangeType;
@property (nonatomic) int changeType;
@property (readonly, nonatomic) BOOL hasBookmark;
@property (retain, nonatomic) MSPBookmarkStorage *bookmark;
@property (readonly, nonatomic) BOOL hasPin;
@property (retain, nonatomic) MSPPinStorage *pin;
@property (readonly, nonatomic) BOOL hasSearchRequest;
@property (retain, nonatomic) MSPHistoryEntryStorage *searchRequest;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (id)syncIdWithPrefix:(id)a0 identifier:(id)a1;

- (int)StringAsChangeType:(id)a0;
- (id)changeTypeAsString:(int)a0;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (id)dictionaryRepresentation;

@end
