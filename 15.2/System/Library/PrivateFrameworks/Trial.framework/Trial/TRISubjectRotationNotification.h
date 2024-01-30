@interface TRISubjectRotationNotification : NSObject

+ (id)registerSubjectRotationWithQueue:(id)a0 usingBlock:(id /* block */)a1;
+ (BOOL)notifySubjectRotation;
+ (void)deregisterUpdateWithToken:(id)a0;

@end
