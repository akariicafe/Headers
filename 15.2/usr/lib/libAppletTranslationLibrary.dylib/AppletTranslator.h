@interface AppletTranslator : NSObject

+ (BOOL)configureSEWithPassInformation:(id)a0 transceiver:(id)a1 limitedToAID:(id)a2 seHasActivatedApplets:(BOOL *)a3 skipAllActivations:(BOOL)a4 error:(id *)a5;
+ (id)getServiceProviderData:(id)a0 withPackage:(id)a1 withModule:(id)a2 withTransceiver:(id)a3 withError:(id *)a4;
+ (BOOL)setPlasticCardMode:(BOOL)a0 withApplet:(id)a1 withPackage:(id)a2 withModule:(id)a3 serialNumber:(id)a4 transceiver:(id)a5 error:(id *)a6;
+ (void)cleanup;
+ (id)checkSEExpressAppletCompatibilityWithPassInformation:(id)a0 error:(id *)a1;
+ (id)parseHCIEvent:(id)a0 withApplet:(id)a1 withPackage:(id)a2 withModule:(id)a3 withTransceiver:(id)a4 withError:(id *)a5;
+ (id)getAppletStateAndHistory:(id)a0 withPackage:(id)a1 withModule:(id)a2 withTransceiver:(id)a3 withError:(id *)a4;
+ (id)checkSEExpressAppletCompatibility:(id)a0 error:(id *)a1;
+ (id)processEndOfTransaction:(id)a0 withPackage:(id)a1 withModule:(id)a2 withTransceiver:(id)a3 withError:(id *)a4;
+ (BOOL)appletCacheUpdated:(id)a0 serialNumber:(id)a1 isdSequenceCounter:(id)a2 transceiver:(id)a3 error:(id *)a4;
+ (void)initLibrary:(id /* block */)a0;
+ (void)initLibraryWithDelegate:(id)a0;
+ (id)getNFCSettings;
+ (BOOL)isLegacyApplet:(id)a0 withPackage:(id)a1 withModule:(id)a2;
+ (id)GetAppletProperties:(id)a0 withPackage:(id)a1 withModule:(id)a2 withTransceiver:(id)a3 withError:(id *)a4;

@end
