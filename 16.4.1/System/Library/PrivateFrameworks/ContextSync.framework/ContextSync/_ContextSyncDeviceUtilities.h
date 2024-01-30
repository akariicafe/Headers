@interface _ContextSyncDeviceUtilities : NSObject

+ (id)currentBootSessionUUID;
+ (BOOL)isSupportEnabledForBMDSL:(id)a0 withError:(id *)a1;
+ (void)updateDescriptionForError:(id *)a0 withErrorCode:(long long)a1;

@end
