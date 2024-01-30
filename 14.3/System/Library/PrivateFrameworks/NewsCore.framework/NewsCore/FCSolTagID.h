@class NSString;

@interface FCSolTagID : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) unsigned long long whitelistLevel;
@property (nonatomic) double specificity;
@property (nonatomic) BOOL isFavorited;
@property (nonatomic) BOOL isAutoFavorited;
@property (nonatomic) BOOL isGroupable;

+ (id)orphanID;
+ (id)discardedOrphanID;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithID:(id)a0 subscibedTags:(id)a1 autoFavoritedTags:(id)a2 groupableTags:(id)a3 whitelistLevel:(unsigned long long)a4 rules:(id)a5;
- (id)initWithID:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
