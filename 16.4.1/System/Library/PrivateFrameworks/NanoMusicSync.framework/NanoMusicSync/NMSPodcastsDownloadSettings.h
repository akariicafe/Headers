@class NSMutableDictionary;

@interface NMSPodcastsDownloadSettings : NSObject <NSCopying> {
    long long _collectionType;
    NSMutableDictionary *_dictionary;
}

@property (nonatomic) long long numberOfEpisodes;
@property (readonly, nonatomic, getter=isEnabled) BOOL enabled;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (id)initWithCollectionType:(long long)a0 dictionary:(id)a1;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)init;
- (id)initWithCollectionType:(long long)a0 legacyDownloadSettingsDictionary:(id)a1;
- (id)initWithCollectionType:(long long)a0 legacyDownloadSettings:(id)a1;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCollectionType:(long long)a0;

@end
