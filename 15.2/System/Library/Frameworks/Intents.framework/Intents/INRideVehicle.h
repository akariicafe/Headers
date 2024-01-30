@class NSString, CLLocation, INImage;

@interface INRideVehicle : NSObject <INImageProxyInjecting, INCacheableContainer, INRideVehicleExport, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) CLLocation *location;
@property (copy, nonatomic) NSString *registrationPlate;
@property (copy, nonatomic) NSString *manufacturer;
@property (copy, nonatomic) NSString *model;
@property (copy, nonatomic) INImage *mapAnnotationImage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)descriptionAtIndent:(unsigned long long)a0;
- (id)_dictionaryRepresentation;
- (id)_intents_cacheableObjects;
- (void)encodeWithCoder:(id)a0;
- (void)_intents_updateContainerWithCache:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_injectProxiesForImages:(id /* block */)a0 completion:(id /* block */)a1;

@end
