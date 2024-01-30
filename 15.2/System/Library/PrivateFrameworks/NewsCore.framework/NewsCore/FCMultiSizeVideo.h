@class NSURL;

@interface FCMultiSizeVideo : NSObject <NSCopying>

@property (readonly, nonatomic) NSURL *small;
@property (readonly, nonatomic) NSURL *large;

- (id)initWithConfigDictionary:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithSmallVideoURL:(id)a0 largeVideoURL:(id)a1;

@end
