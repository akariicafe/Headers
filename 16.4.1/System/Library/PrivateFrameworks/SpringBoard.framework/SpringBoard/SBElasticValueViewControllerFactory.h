@interface SBElasticValueViewControllerFactory : NSObject {
    id /* block */ _generator;
}

+ (id)factoryWithBrightnessDataSource:(id)a0;
+ (id)factoryWithVolumeDataSource:(id)a0;

- (void).cxx_destruct;
- (id)_initWithViewControllerGenerator:(id /* block */)a0;
- (id)elasticValueViewController;

@end
