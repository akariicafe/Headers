@interface VTUtteranceMetadataManager : NSObject

+ (id)_getBaseMetaDictionaryForUtterancePath:(id)a0;
+ (BOOL)isUtteranceImplicitlyTrained:(id)a0;
+ (id)recordedTimeStampOfFile:(id)a0;
+ (void)_writeMetaDict:(id)a0 forUtterancePath:(id)a1;
+ (void)_saveMetaVersionFileAtPath:(id)a0;
+ (void)_upgradeLocaleDirectoryIfNecessary:(id)a0;
+ (BOOL)_audioDirectoryNeedsUpgrade:(id)a0;
+ (void)_upgradeUtteranceMeta:(id)a0;
+ (void)saveUtteranceMetadataForUtterance:(id)a0 isExplicitEnrollment:(BOOL)a1 isHandheldEnrollment:(BOOL)a2 withBiometricResult:(unsigned long long)a3;
+ (void)saveMetaVersionFileAtSATAudioDirectory:(id)a0;
+ (void)upgradeMetaFilesIfNecessaaryAtSATRoot:(id)a0;

@end
