@class NSNumber;

@interface VUIMPSeasonMediaCollectionIdentifier : VUIMPMediaEntityIdentifier

@property (copy, nonatomic) NSNumber *seasonNumber;

+ (id)requiredMPPropertyNames;
+ (id)seasonIdentifierWithMediaItem:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)initWithPersistentID:(id)a0 mediaEntityType:(id)a1;
- (id)initWithPersistentID:(id)a0 seasonNumber:(id)a1;

@end
