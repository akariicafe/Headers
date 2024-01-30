@class NSString, DOCThumbnailDescriptor;

@interface DOCThumbnailKey : NSObject <NSCopying>

@property (readonly, nonatomic) NSString *primaryKey;
@property (readonly, nonatomic) DOCThumbnailDescriptor *descriptor;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithPrimaryKey:(id)a0 descriptor:(id)a1;

@end
