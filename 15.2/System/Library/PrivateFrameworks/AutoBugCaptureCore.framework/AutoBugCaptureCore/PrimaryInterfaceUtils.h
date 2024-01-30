@class NSString, NSDate;

@interface PrimaryInterfaceUtils : NSObject

@property (readonly, nonatomic) BOOL hasPrimaryInterface;
@property (readonly, nonatomic) long long primaryInterfaceType;
@property (readonly, nonatomic) NSString *primaryInterfaceTypeString;
@property (readonly, nonatomic) NSDate *interfaceBecamePrimaryDate;
@property (readonly, nonatomic) NSDate *estimatedInterfaceBecamePrimaryDate;

+ (id)sharedInstance;

- (void)_setEstimatedInterfaceBecamePrimaryDate:(id)a0;
- (void)getDefaultPathInfoUsingSecondsSinceChange;
- (id)primaryInterfaceTypeString;
- (void).cxx_destruct;
- (id)init;
- (void)_setInterfaceBecamePrimaryDate:(id)a0;
- (void)_setHasPrimaryInterface:(BOOL)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)_setPrimaryInterfaceType:(long long)a0;

@end
