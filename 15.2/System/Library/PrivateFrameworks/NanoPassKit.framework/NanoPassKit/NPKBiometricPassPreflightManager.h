@protocol NPKBiometricPassPreflightManagerDataSource;

@interface NPKBiometricPassPreflightManager : NSObject

@property (readonly, weak, nonatomic) id<NPKBiometricPassPreflightManagerDataSource> dataSource;

- (id)initWithDataSource:(id)a0;
- (void).cxx_destruct;
- (void)preflightStatusForType:(unsigned long long)a0 completion:(id /* block */)a1;

@end
