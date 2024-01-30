@interface PEEditAction : NSObject

@property (readonly, nonatomic) long long actionType;

- (id)analyticsPayload;
- (void)applyToLoadResult:(id)a0 completion:(id /* block */)a1;

@end
