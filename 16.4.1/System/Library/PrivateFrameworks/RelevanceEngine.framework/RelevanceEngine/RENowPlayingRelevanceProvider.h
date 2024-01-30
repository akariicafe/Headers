@class NSString;

@interface RENowPlayingRelevanceProvider : RERelevanceProvider

@property (readonly, nonatomic) unsigned long long state;
@property (readonly, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic) NSString *itemIdentifer;

+ (id)relevanceSimulatorID;

- (unsigned long long)_hash;
- (id)initWithState:(unsigned long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryEncoding;
- (id)initWithState:(unsigned long long)a0 bundleIdentifier:(id)a1 itemIdentifier:(id)a2;

@end
