@interface WAProviderDataOrigination : NSObject <AADataType>

@property (readonly, nonatomic) long long providerDataOrigination;

- (id)toJsonValueAndReturnError:(id *)a0;
- (id)initWithProviderDataOrigination:(long long)a0;

@end
