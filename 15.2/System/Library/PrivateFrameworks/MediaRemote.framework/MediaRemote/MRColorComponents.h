@class _MRColorProtobuf;

@interface MRColorComponents : NSObject <NSCopying>

@property (readonly, nonatomic) _MRColorProtobuf *protobuf;
@property (nonatomic) float red;
@property (nonatomic) float green;
@property (nonatomic) float blue;
@property (nonatomic) float alpha;

- (id)initWithProtobuf:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
