@class NSObject;
@protocol OS_dispatch_queue;

@interface MSVSystemDialogManager : NSObject {
    struct __CFDictionary { } *_registeredSystemDialogs;
    NSObject<OS_dispatch_queue> *_serialQueue;
}

+ (id)sharedManager;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)registerSystemDialog:(id)a0 forUserNotification:(struct __CFUserNotification { } *)a1;
- (id)systemDialogForUserNotification:(struct __CFUserNotification { } *)a0;
- (void)unregisterSystemDialogWithUserNotification:(struct __CFUserNotification { } *)a0;

@end
