@class NSNumber, NSString;

@interface WLKBasicSeasonMetadata : WLKBasicContentMetadata

@property (readonly, nonatomic) NSNumber *seasonNumber;
@property (readonly, copy, nonatomic) NSString *canonicalShowID;

+ (id)seasonsWithDictionaries:(id)a0;

- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;

@end
