@interface MiroPhotoFreezeInfo : MiroFreezeInfo

@property (nonatomic) BOOL added;
@property (nonatomic) BOOL removed;
@property (nonatomic) BOOL used;
@property (nonatomic) BOOL iris;
@property (nonatomic) double duration;

- (BOOL)isAdded;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithData:(id)a0;
- (id)description;
- (BOOL)isRemoved;
- (id)dataRepresentation;
- (BOOL)isFreeze;

@end
