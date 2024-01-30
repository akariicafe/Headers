@class NSNumber;

@interface VUIMPSeasonMediaCollectionIdentifier : VUIMPMediaEntityIdentifier

@property (copy, nonatomic) NSNumber *seasonNumber;

+ (id)requiredMPPropertyNames;
+ (id)seasonIdentifierWithMediaItem:(id)a0;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithPersistentID:(id)a0 mediaEntityType:(id)a1;
- (id)initWithPersistentID:(id)a0 seasonNumber:(id)a1;

@end
