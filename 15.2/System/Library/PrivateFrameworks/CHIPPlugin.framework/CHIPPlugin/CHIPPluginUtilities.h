@interface CHIPPluginUtilities : HMFObject

+ (id)identifierStringWithCHIPNodeID:(id)a0;
+ (id)setupIDFromSetupCode:(id)a0 discriminator:(id)a1;
+ (id)chip_shortTypeFromUUID:(id)a0;
+ (long long)randomDiscriminator;

@end
