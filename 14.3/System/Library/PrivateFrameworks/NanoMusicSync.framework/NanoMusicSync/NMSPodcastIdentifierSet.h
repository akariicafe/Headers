@class NSNumber, NSString;

@interface NMSPodcastIdentifierSet : NSObject <NSCopying>

@property (readonly, nonatomic) NSNumber *storeID;
@property (readonly, nonatomic) NSString *feedURL;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)a0;
- (id)initWithStoreID:(id)a0 feedURL:(id)a1;
- (BOOL)isEqualToPodcastIdentifierSet:(id)a0;

@end
