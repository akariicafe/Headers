@class NSURL;

@interface FCMultiResolutionImage : NSObject <NSCopying>

@property (retain, nonatomic) NSURL *imageURL1x;
@property (retain, nonatomic) NSURL *imageURL2x;
@property (retain, nonatomic) NSURL *imageURL3x;

- (id)initWithConfigDictionary:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithImageURL1X:(id)a0 imageURL2X:(id)a1 imageURL3X:(id)a2;
- (id)init;
- (void).cxx_destruct;

@end
