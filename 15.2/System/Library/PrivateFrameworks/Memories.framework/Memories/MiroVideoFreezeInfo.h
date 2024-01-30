@class NSArray;

@interface MiroVideoFreezeInfo : MiroFreezeInfo

@property (retain, nonatomic) NSArray *ranges;

- (id)dataRepresentation;
- (BOOL)isAdded;
- (id)initWithData:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)token;
- (BOOL)isRemoved;
- (BOOL)isFreeze;

@end
