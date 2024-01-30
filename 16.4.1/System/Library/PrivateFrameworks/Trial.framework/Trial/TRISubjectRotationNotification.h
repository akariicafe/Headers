@interface TRISubjectRotationNotification : NSObject

+ (void)deregisterUpdateWithToken:(id)a0;
+ (BOOL)notifySubjectRotation;
+ (id)registerSubjectRotationWithQueue:(id)a0 usingBlock:(id /* block */)a1;

@end
