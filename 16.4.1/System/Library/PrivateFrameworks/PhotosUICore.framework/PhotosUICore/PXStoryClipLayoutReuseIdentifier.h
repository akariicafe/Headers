@protocol PXStoryClip;

@interface PXStoryClipLayoutReuseIdentifier : NSObject <NSCopying>

@property (readonly, nonatomic) id<PXStoryClip> clip;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (BOOL)hasResourceEqualTo:(id)a0;
- (id)initWithClip:(id)a0;

@end
