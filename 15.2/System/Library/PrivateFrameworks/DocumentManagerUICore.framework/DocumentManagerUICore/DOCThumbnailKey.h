@class DOCThumbnailDescriptor, NSObject;
@protocol NSCopying;

@interface DOCThumbnailKey : NSObject <NSCopying>

@property (readonly, nonatomic) NSObject<NSCopying> *primaryKey;
@property (readonly, nonatomic) DOCThumbnailDescriptor *descriptor;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithPrimaryKey:(id)a0 descriptor:(id)a1;

@end
