@class NUSpace, NSMutableArray;

@interface _NUTaggedSpace : NSObject <NSCopying> {
    NSMutableArray *_tagNodes;
}

@property (readonly) NUSpace *space;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)tagNodes;
- (id)initWithSpace:(id)a0;
- (BOOL)hasTransform;
- (void)addTagNode:(id)a0;
- (void)addTagNodes:(id)a0;
- (void)mergeSpace:(id)a0;
- (BOOL)isEqualToTaggedImageSpace:(id)a0;

@end
