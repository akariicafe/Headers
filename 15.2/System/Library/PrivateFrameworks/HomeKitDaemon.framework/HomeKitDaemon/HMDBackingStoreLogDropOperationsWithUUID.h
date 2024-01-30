@class NSUUID;

@interface HMDBackingStoreLogDropOperationsWithUUID : HMDBackingStoreOperation

@property (retain, nonatomic) NSUUID *uuid;
@property (nonatomic) long long maskValue;
@property (nonatomic) long long compareValue;

- (void).cxx_destruct;
- (id)mainReturningError;
- (id)initWithUUID:(id)a0 pushingTo:(unsigned long long)a1 resultBlock:(id /* block */)a2;

@end
