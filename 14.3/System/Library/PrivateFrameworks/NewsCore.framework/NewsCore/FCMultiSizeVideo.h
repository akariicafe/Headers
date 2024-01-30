@class NSURL;

@interface FCMultiSizeVideo : NSObject <NSCopying>

@property (readonly, nonatomic) NSURL *small;
@property (readonly, nonatomic) NSURL *large;

- (id)initWithConfigDictionary:(id)a0;
- (id)initWithSmallVideoURL:(id)a0 largeVideoURL:(id)a1;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
