@class NSNumber, NSString;

@interface NMSPodcastIdentifierSet : NSObject <NSCopying>

@property (readonly, nonatomic) NSNumber *storeID;
@property (readonly, nonatomic) NSString *feedURL;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (id)initWithStoreID:(id)a0 feedURL:(id)a1;
- (BOOL)isEqualToPodcastIdentifierSet:(id)a0;

@end
