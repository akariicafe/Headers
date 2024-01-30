@interface PPTClientInterface : NSObject

+ (id)getMetadataForSubsystem:(id)a0;
+ (id)getMetadataByNameForSubsystem:(id)a0 category:(id)a1;
+ (id)getMetadataForSubsystem:(id)a0 category:(id)a1 name:(id)a2;
+ (id)getAllFrameworkSubsystem;
+ (id)getMetadataForSubsystem:(id)a0 category:(id)a1;
+ (id)getMetadataByCategoryForSubsystem:(id)a0;
+ (id)getAllSubsystem;
+ (void)buildDeviceMetadata;
+ (id)getMetadataForSubsystem:(id)a0 category:(id)a1 name:(id)a2 version:(double)a3;

@end
