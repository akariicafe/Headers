@class GDViewAccessToken, NSString, NSArray, NSError;

@interface _TtCC24IntelligencePlatformCore7ViewXPC6Server : NSObject <GDViewXPCProtocol> {
    void /* unknown type, empty encoding */ auditToken;
    void /* unknown type, empty encoding */ clientIdentifier;
    void /* unknown type, empty encoding */ entitledViewNames;
}

- (id)init;
- (void).cxx_destruct;
- (void)accessTokenForFeaturesWithIsSandboxed:(BOOL)a0 completion:(id /* block */)a1;
- (void)accessTokenForViewName:(NSString *)a0 isSandboxed:(BOOL)a1 completion:(void (^)(GDViewAccessToken *, NSError *))a2;
- (void)featureKeys:(id /* block */)a0;
- (void)performUpdateForViewNames:(NSArray *)a0 includeDependencies:(BOOL)a1 completion:(void (^)(BOOL, NSError *))a2;

@end
