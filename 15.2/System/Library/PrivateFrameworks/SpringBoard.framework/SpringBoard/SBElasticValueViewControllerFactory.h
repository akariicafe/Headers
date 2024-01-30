@interface SBElasticValueViewControllerFactory : NSObject {
    id /* block */ _generator;
}

+ (id)factoryWithVolumeDataSource:(id)a0;
+ (id)factoryWithBrightnessDataSource:(id)a0;

- (void).cxx_destruct;
- (id)elasticValueViewController;
- (id)_initWithViewControllerGenerator:(id /* block */)a0;

@end
