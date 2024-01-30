@interface VUIMediaEntityType : NSObject <NSCopying>

@property (nonatomic) unsigned long long subtype;
@property (nonatomic) unsigned long long mediaCategoryType;
@property (nonatomic) unsigned long long mediaCollectionType;
@property (nonatomic, getter=isRental) BOOL rental;

+ (id)movie;
+ (id)episode;
+ (id)season;
+ (id)show;
+ (id)movieRental;
+ (id)homeVideo;

- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)stringDescription;
- (id)_initWithMediaItemCategoryType:(unsigned long long)a0 isRental:(BOOL)a1;
- (id)_initWithMediaCollectionType:(unsigned long long)a0 mediaCategoryType:(unsigned long long)a1;

@end
