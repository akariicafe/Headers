@interface WAOsInstallVariant : NSObject <AADataType>

@property (readonly, nonatomic) long long osInstallVariant;

- (id)initWithOsInstallVariant:(long long)a0;
- (id)toJsonValueAndReturnError:(id *)a0;

@end
