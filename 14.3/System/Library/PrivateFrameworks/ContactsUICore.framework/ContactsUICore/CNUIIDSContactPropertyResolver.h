@class CNUIIDSAvailabilityProvider;

@interface CNUIIDSContactPropertyResolver : NSObject

@property (readonly, nonatomic) CNUIIDSAvailabilityProvider *idsAvailabilityProvider;

+ (id)descriptorForRequiredKeys;
+ (id)descriptorForCopyingStrippedContact:(id)a0;
+ (id)IDSRelevantPropertiesForContact:(id)a0;

- (void).cxx_destruct;
- (id)initWithIDSAvailabilityProvider:(id)a0;
- (id)resolveBestIMessageIDSPropertyForContact:(id)a0 schedulerProvider:(id)a1;
- (id)resolveBestFaceTimeIDSPropertyForContact:(id)a0 schedulerProvider:(id)a1;
- (id)resolveBestIDSPropertyForContact:(id)a0 schedulerProvider:(id)a1 usingAvailabilityProviderCall:(id /* block */)a2;

@end
