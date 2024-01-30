@class NSDictionary, NSString;

@interface URTUserNotificationPresentation : NSObject <URTPresenting> {
    struct __CFUserNotification { } *_userNotification;
}

@property (readonly, copy, nonatomic) NSDictionary *contents;
@property (readonly, nonatomic) unsigned long long creationFlags;
@property (readonly, nonatomic) int error;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)registerUserNotification:(struct __CFUserNotification { } *)a0 handler:(id /* block */)a1;
+ (void)unregisterHandlerForUserNotification:(struct __CFUserNotification { } *)a0;
+ (void)invokeHandlerForUserNotification:(struct __CFUserNotification { } *)a0 responseFlags:(unsigned long long)a1;

- (void)dismiss;
- (void).cxx_destruct;
- (void)invalidate;
- (void)present;
- (id)initWithContents:(id)a0 flags:(unsigned long long)a1;
- (struct __CFRunLoopSource { } *)createRunLoopSourceOrdered:(long long)a0 handler:(id /* block */)a1;

@end
