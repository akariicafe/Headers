@interface TRISubjectRotationNotification : NSObject

+ (void)deregisterUpdateWithToken:(id)a0;
+ (id)registerSubjectRotationWithQueue:(id)a0 usingBlock:(id /* block */)a1;
+ (BOOL)notifySubjectRotation;

@end
