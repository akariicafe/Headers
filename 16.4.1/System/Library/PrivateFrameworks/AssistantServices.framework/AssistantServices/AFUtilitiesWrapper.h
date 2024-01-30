@interface AFUtilitiesWrapper : NSObject

+ (BOOL)deviceSupportsSiriUOD;
+ (BOOL)isDictationLanguageInstalledForOnDeviceDictation:(id)a0 offlineDictationStatus:(id)a1;
+ (BOOL)offlineDictationCapable;
+ (BOOL)shouldRunAsrOnServerForUOD;

@end
