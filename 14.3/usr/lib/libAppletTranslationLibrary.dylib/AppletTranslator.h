@interface AppletTranslator : NSObject

+ (BOOL)configureSEExpressApplets:(id)a0 transceiver:(id)a1 seHasActivatedApplets:(BOOL *)a2 skipAllActivations:(BOOL)a3 inSession:(BOOL)a4 error:(id *)a5;
+ (BOOL)configureSEExpressApplets:(id)a0 transceiver:(id)a1 seHasActivatedApplets:(BOOL *)a2 skipAllActivations:(BOOL)a3 error:(id *)a4;
+ (id)getAppletStateAndHistory:(id)a0 withPackage:(id)a1 withModule:(id)a2 withTransceiver:(id)a3 withError:(id *)a4;
+ (BOOL)appletCacheUpdated:(id)a0 serialNumber:(id)a1 isdSequenceCounter:(id)a2 transceiver:(id)a3 error:(id *)a4;
+ (void)cleanup;
+ (id)processEndOfTransaction:(id)a0 withPackage:(id)a1 withModule:(id)a2 withTransceiver:(id)a3 withError:(id *)a4;
+ (BOOL)isLegacyApplet:(id)a0 withPackage:(id)a1 withModule:(id)a2;
+ (void)initLibrary:(id /* block */)a0;
+ (BOOL)configureSEExpressApplets:(id)a0 transceiver:(id)a1 error:(id *)a2;
+ (BOOL)setPlasticCardMode:(BOOL)a0 withApplet:(id)a1 withPackage:(id)a2 withModule:(id)a3 serialNumber:(id)a4 transceiver:(id)a5 error:(id *)a6;
+ (id)parseHCIEvent:(id)a0 withApplet:(id)a1 withPackage:(id)a2 withModule:(id)a3 withTransceiver:(id)a4 withError:(id *)a5;
+ (BOOL)configureSEExpressApplets:(id)a0 transceiver:(id)a1 seHasActivatedApplets:(BOOL *)a2 skipAllActivations:(BOOL)a3 inSession:(BOOL)a4 supportsExpressAOnly:(BOOL)a5 error:(id *)a6;
+ (id)getNFCSettings;
+ (void)initLibraryWithDelegate:(id)a0;
+ (id)GetAppletProperties:(id)a0 withPackage:(id)a1 withModule:(id)a2 withTransceiver:(id)a3 withError:(id *)a4;
+ (id)checkSEExpressAppletCompatibility:(id)a0 error:(id *)a1;

@end
