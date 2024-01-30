@class NSDictionary, NSString, NSArray;

@interface WLKCanonicalPlayablesSiriResponse : NSObject

@property (readonly, copy, nonatomic) NSDictionary *dictionary;
@property (copy, nonatomic) NSString *canonicalID;
@property (nonatomic) unsigned long long contentType;
@property (nonatomic, getter=isWatchListable) BOOL watchListable;
@property (nonatomic, getter=isWatchListed) BOOL watchListed;
@property (retain, nonatomic) NSArray *playables;

+ (id)_parseChannelsFromPayload:(id)a0;

- (id)initWithDictionary:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0 statsID:(id)a1;

@end
