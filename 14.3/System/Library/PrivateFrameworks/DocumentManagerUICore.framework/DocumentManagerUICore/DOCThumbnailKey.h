@class DOCThumbnailDescriptor, NSObject;
@protocol NSCopying;

@interface DOCThumbnailKey : NSObject <NSCopying>

@property (readonly, nonatomic) NSObject<NSCopying> *primaryKey;
@property (readonly, nonatomic) DOCThumbnailDescriptor *descriptor;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithPrimaryKey:(id)a0 descriptor:(id)a1;

@end
