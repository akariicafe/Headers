@interface AppletTranslationLibrary.ExpressMode : NSObject {
    void /* unknown type, empty encoding */ logger;
    void /* unknown type, empty encoding */ modulesRequiringSlowPath;
    void /* unknown type, empty encoding */ reservedTCIs;
    void /* unknown type, empty encoding */ internalBuild;
    void /* unknown type, empty encoding */ userDefaults;
}

+ (BOOL)applyConfiguration:(id)a0 supportsTypeAExpress:(BOOL)a1 toSecureElement:(id)a2 inSessionWithAID:(id)a3 hasActivatedApplets:(BOOL *)a4 skipActivations:(BOOL)a5 error:(id *)a6;
+ (id)checkCompatibilityWithPassInformation:(id)a0 error:(id *)a1;
+ (BOOL)getFastPathWithPassInformation:(id)a0 fastPathOut:(BOOL *)a1 error:(id *)a2;

- (void).cxx_destruct;
- (id)init;

@end
