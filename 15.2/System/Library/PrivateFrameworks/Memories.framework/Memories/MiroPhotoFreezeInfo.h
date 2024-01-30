@interface MiroPhotoFreezeInfo : MiroFreezeInfo

@property (nonatomic) BOOL added;
@property (nonatomic) BOOL removed;
@property (nonatomic) BOOL used;
@property (nonatomic) BOOL iris;
@property (nonatomic) double duration;

- (id)dataRepresentation;
- (BOOL)isAdded;
- (id)initWithData:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isRemoved;
- (BOOL)isFreeze;

@end
