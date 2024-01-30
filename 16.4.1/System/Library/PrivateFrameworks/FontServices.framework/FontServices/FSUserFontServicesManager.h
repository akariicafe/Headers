@interface FSUserFontServicesManager : NSObject

+ (void)GSFontRegisterPersistentURLs:(id)a0 enabled:(BOOL)a1 forProfileFonts:(BOOL)a2 withReply:(id /* block */)a3;
+ (void)GSFontUnregisterPersistentURLs:(id)a0 forProfileFonts:(BOOL)a1 withReply:(id /* block */)a2;
+ (void)GSFontEnableOrDisablePersistentURLs:(id)a0 forProfileFonts:(BOOL)a1 enabled:(BOOL)a2 suspend:(BOOL)a3 withReply:(id /* block */)a4;
+ (id)_UserFontServicesConnection;

@end
