@interface BWEspressoInferenceAdapter : NSObject

+ (void)initialize;
+ (id)espressoNetworkURLForPlatformedResourceBaseName:(id)a0 embedPlatformOrDeviceID:(BOOL)a1;
+ (id)locateNetworkFileFromFormat:(id)a0 defaultOverrideKey:(id)a1 version:(struct { unsigned short x0; unsigned short x1; unsigned short x2; })a2;
+ (struct { unsigned short x0; unsigned short x1; unsigned short x2; })findAvailableVersion:(id)a0 defaultOverrideKey:(id)a1 versionLocator:(id /* block */)a2;

- (id)inferenceProviderForType:(int)a0 version:(struct { unsigned short x0; unsigned short x1; unsigned short x2; })a1 configuration:(id)a2 resourceProvider:(id)a3 status:(int *)a4;
- (id)inferenceProvidersForType:(int)a0 version:(struct { unsigned short x0; unsigned short x1; unsigned short x2; })a1 configuration:(id)a2 resourceProvider:(id)a3 status:(int *)a4;

@end
