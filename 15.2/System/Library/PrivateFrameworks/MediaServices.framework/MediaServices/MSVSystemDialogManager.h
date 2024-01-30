@class NSObject;
@protocol OS_dispatch_queue;

@interface MSVSystemDialogManager : NSObject {
    struct __CFDictionary { } *_registeredSystemDialogs;
    NSObject<OS_dispatch_queue> *_serialQueue;
}

+ (id)sharedManager;

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)unregisterSystemDialogWithUserNotification:(struct __CFUserNotification { } *)a0;
- (id)systemDialogForUserNotification:(struct __CFUserNotification { } *)a0;
- (void)registerSystemDialog:(id)a0 forUserNotification:(struct __CFUserNotification { } *)a1;

@end
