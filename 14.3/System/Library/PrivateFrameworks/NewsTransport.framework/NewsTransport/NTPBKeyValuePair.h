@class NTPBDate, NTPBReadingHistoryItem, NTPBIssueReadingHistoryItem, NTPBPrivateDataControllerSyncState, NTPBAppConfigurationResource, NTPBNetworkSessionList, NTPBAudioPlaylistItem, NSString, NTPBPersonalizationLocalData, NTPBAsset, NTPBAVAsset, NSData, NTPBCacheCoordinatorHints, NTPBAVAssetKey;

@interface NTPBKeyValuePair : PBCodable <NSCopying> {
    struct { unsigned char valueType : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasKey;
@property (retain, nonatomic) NSString *key;
@property (nonatomic) BOOL hasValueType;
@property (nonatomic) int valueType;
@property (readonly, nonatomic) BOOL hasDataValue;
@property (retain, nonatomic) NSData *dataValue;
@property (readonly, nonatomic) BOOL hasStringValue;
@property (retain, nonatomic) NSString *stringValue;
@property (readonly, nonatomic) BOOL hasDateValue;
@property (retain, nonatomic) NTPBDate *dateValue;
@property (readonly, nonatomic) BOOL hasCacheCoordinatorHintsValue;
@property (retain, nonatomic) NTPBCacheCoordinatorHints *cacheCoordinatorHintsValue;
@property (readonly, nonatomic) BOOL hasRecordData;
@property (retain, nonatomic) NSData *recordData;
@property (readonly, nonatomic) BOOL hasReadingHistoryItem;
@property (retain, nonatomic) NTPBReadingHistoryItem *readingHistoryItem;
@property (readonly, nonatomic) BOOL hasNetworkSessionList;
@property (retain, nonatomic) NTPBNetworkSessionList *networkSessionList;
@property (readonly, nonatomic) BOOL hasPersonalizationLocalData;
@property (retain, nonatomic) NTPBPersonalizationLocalData *personalizationLocalData;
@property (readonly, nonatomic) BOOL hasAppConfigurationResource;
@property (retain, nonatomic) NTPBAppConfigurationResource *appConfigurationResource;
@property (readonly, nonatomic) BOOL hasPrivateDataControllerSyncState;
@property (retain, nonatomic) NTPBPrivateDataControllerSyncState *privateDataControllerSyncState;
@property (readonly, nonatomic) BOOL hasIssueReadingHistoryItem;
@property (retain, nonatomic) NTPBIssueReadingHistoryItem *issueReadingHistoryItem;
@property (readonly, nonatomic) BOOL hasAsset;
@property (retain, nonatomic) NTPBAsset *asset;
@property (readonly, nonatomic) BOOL hasAudioPlaylistItem;
@property (retain, nonatomic) NTPBAudioPlaylistItem *audioPlaylistItem;
@property (readonly, nonatomic) BOOL hasAvAsset;
@property (retain, nonatomic) NTPBAVAsset *avAsset;
@property (readonly, nonatomic) BOOL hasAvAssetKey;
@property (retain, nonatomic) NTPBAVAssetKey *avAssetKey;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (void)dealloc;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;

@end
