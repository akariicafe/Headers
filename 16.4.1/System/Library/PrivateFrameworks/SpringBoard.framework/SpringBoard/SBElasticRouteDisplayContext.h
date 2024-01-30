@class NSString, CCUICAPackageDescription, UIImage;

@interface SBElasticRouteDisplayContext : NSObject <SBElasticRouteDisplaying>

@property (retain, nonatomic) NSString *localizedDisplayName;
@property (copy, nonatomic) id /* block */ glyphStateValueTransformer;
@property (retain, nonatomic) CCUICAPackageDescription *glyphPackage;
@property (retain, nonatomic) UIImage *glyphImage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)routeContextWithName:(id)a0 glyphImage:(id)a1;
+ (id)routeContextWithName:(id)a0 valueTransformer:(id /* block */)a1 glyphPackage:(id)a2;

- (void).cxx_destruct;
- (id)_initWithName:(id)a0 glyphStateValueTransformer:(id /* block */)a1 glyphPackage:(id)a2 glyphImage:(id)a3;

@end
