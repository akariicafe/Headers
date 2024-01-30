@interface SKUINavigationStackEnsureConsistencyRequest : NSObject <NSCopying>

@property (readonly, nonatomic) long long navigationControllerOperation;
@property (readonly, nonatomic) BOOL operationDidComplete;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithNavigationControllerOperation:(long long)a0 operationDidComplete:(BOOL)a1;

@end
