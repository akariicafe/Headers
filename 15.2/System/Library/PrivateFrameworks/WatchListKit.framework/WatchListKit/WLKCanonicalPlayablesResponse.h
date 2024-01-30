@class NSDictionary, NSString, NSArray;

@interface WLKCanonicalPlayablesResponse : NSObject

@property (readonly, copy, nonatomic) NSDictionary *dictionary;
@property (readonly, copy, nonatomic) NSString *canonicalID;
@property (readonly, nonatomic) unsigned long long contentType;
@property (readonly, nonatomic, getter=isWatchListable) BOOL watchListable;
@property (readonly, nonatomic, getter=isWatchListed) BOOL watchListed;
@property (readonly, nonatomic) NSArray *playables;

- (void).cxx_destruct;
- (id)init;
- (id)initWithDictionary:(id)a0;

@end
