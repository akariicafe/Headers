@interface NELaunchServices : NSObject

+ (id)copyLSProxyForUID:(unsigned int)a0;
+ (id)lookupIdentifier:(id)a0 plugins:(id *)a1;
+ (id)pluginClassToExtensionPoint:(long long)a0;
+ (id)pluginProxyWithIdentifier:(id)a0 type:(id)a1 pluginClass:(long long)a2 extensionPoint:(id)a3;
+ (id)bundleProxyForIdentifier:(id)a0 uid:(unsigned int)a1 plugins:(id *)a2;

@end
