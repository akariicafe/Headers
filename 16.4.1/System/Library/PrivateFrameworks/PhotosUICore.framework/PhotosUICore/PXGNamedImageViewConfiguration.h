@class NSString;

@interface PXGNamedImageViewConfiguration : NSObject <NSCopying>

@property (copy, nonatomic) NSString *imageName;
@property (nonatomic) long long contentMode;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (void).cxx_destruct;

@end
