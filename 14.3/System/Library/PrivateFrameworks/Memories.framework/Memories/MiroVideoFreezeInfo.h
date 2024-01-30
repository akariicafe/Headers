@class NSArray;

@interface MiroVideoFreezeInfo : MiroFreezeInfo

@property (retain, nonatomic) NSArray *ranges;

- (void).cxx_destruct;
- (BOOL)isAdded;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithData:(id)a0;
- (id)description;
- (BOOL)isRemoved;
- (id)token;
- (id)dataRepresentation;
- (BOOL)isFreeze;

@end
