@interface MPCFWrapper : NSObject

@property (nonatomic, getter=isNullRef) BOOL nullRef;
@property (readonly, nonatomic) const void *refValue;

- (void)dealloc;
- (id)description;
- (id)initWithCFType:(void *)a0;

@end
