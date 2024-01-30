@class NSString;

@interface UIProxyObject : NSObject <NSCoding> {
    NSString *proxiedObjectIdentifier;
}

+ (void)addMappingFromIdentifier:(id)a0 toObject:(id)a1 forCoder:(id)a2;
+ (void)addMappings:(id)a0 forCoder:(id)a1;
+ (id)mappedObjectForCoder:(id)a0 withIdentifier:(id)a1;
+ (struct __CFDictionary { } *)proxyDecodingMap;
+ (void)removeMappingsForCoder:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)proxiedObjectIdentifier;
- (void)setProxiedObjectIdentifier:(id)a0;

@end
