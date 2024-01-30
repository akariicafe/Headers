@interface AppletTranslationLibrary.ExpressMode : NSObject {
    void /* unknown type, empty encoding */ logger;
    void /* unknown type, empty encoding */ modulesRequiringSlowPath;
    void /* unknown type, empty encoding */ reservedTCIs;
    void /* unknown type, empty encoding */ internalBuild;
    void /* unknown type, empty encoding */ userDefaults;
}

+ (BOOL)applyConfiguration:(id)a0 toSecureElement:(id)a1 inSessionWithAID:(id)a2 hasActivatedApplets:(BOOL *)a3 skipActivations:(BOOL)a4 error:(id *)a5;
+ (id)checkCompatibilityWithPassInformation:(id)a0 error:(id *)a1;
+ (BOOL)getFastPathWithPassInformation:(id)a0 fastPathOut:(BOOL *)a1 error:(id *)a2;

- (id)init;
- (void).cxx_destruct;

@end
