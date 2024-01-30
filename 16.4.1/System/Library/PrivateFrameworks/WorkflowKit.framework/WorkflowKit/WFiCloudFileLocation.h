@interface WFiCloudFileLocation : WFFileProviderLocation

+ (id)subpathFromURL:(id)a0;
+ (BOOL)canRepresentURL:(id)a0 item:(id)a1 parentItems:(id)a2;
+ (id)resolveLocationFromPossibleProviderDomainIDsWithSerializedProviderDomainID:(id)a0 relativeSubpath:(id)a1;

- (id)resolveLocationWithError:(id *)a0;

@end
