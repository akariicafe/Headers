@interface MPCFWrapper : NSObject

@property (nonatomic, getter=isNullRef) BOOL nullRef;
@property (readonly, nonatomic) const void *refValue;

- (id)description;
- (id)initWithCFType:(void *)a0;
- (void)dealloc;

@end
