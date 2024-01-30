@class NSString;

@interface SBKUniversalPlaybackPositionMetadata : NSObject <SBKKeyValuePayloadPair, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSString *itemIdentifier;
@property double timestamp;
@property double bookmarkTime;
@property BOOL hasBeenPlayed;
@property unsigned long long playCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)pairWithKVSKey:(id)a0 kvsPayload:(id)a1;
+ (id)metadataWithItemIdentifier:(id)a0 keyValueStorePayload:(id)a1 failuresOkay:(BOOL)a2;
+ (id)keyValueStoreItemIdentifierForItem:(id)a0;
+ (id)_testableMetadataItem_1;
+ (id)keyValueStoreItemIdentifierForUniqueStoreID:(long long)a0 itemTitle:(id)a1 albumName:(id)a2 itemArtistName:(id)a3 feedURL:(id)a4 feedGUID:(id)a5;
+ (id)metadataWithValuesFromDataSourceItem:(id)a0;
+ (id)metadataWithItemIdentifier:(id)a0 bookmarkTime:(double)a1 bookmarkTimestamp:(double)a2 hasBeenPlayed:(BOOL)a3 playCount:(unsigned long long)a4;
+ (id)metadataWithItemIdentifier:(id)a0 keyValueStorePayload:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)kvsKey;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)kvsPayload;
- (id)kvsValueDescription;
- (id)initAsTestableItem;
- (id)keyValueStorePayload;

@end
