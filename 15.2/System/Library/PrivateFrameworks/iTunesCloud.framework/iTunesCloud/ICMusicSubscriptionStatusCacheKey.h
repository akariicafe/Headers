@class NSNumber, NSString;

@interface ICMusicSubscriptionStatusCacheKey : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *DSID;
@property (copy, nonatomic) NSString *phoneNumber;
@property (copy, nonatomic) NSString *storefrontIdentifier;

- (id)stringRepresentation;
- (id)dictionaryRepresentationIncludingDSID:(BOOL)a0;
- (id)description;
- (id)initWithDictionaryRepresentation:(id)a0 requiringDSID:(BOOL)a1;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithStringRepresentation:(id)a0;

@end
