@class NSString, NSDictionary, NSURL, NSXPCConnection, NSObject;
@protocol OS_dispatch_queue;

@interface SFUserAlert : NSObject {
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    struct __CFUserNotification { } *_cfNotif;
    NSXPCConnection *_xpcCnx;
    struct __CFRunLoopSource { } *_runLoopSrc;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) id /* block */ errorHandler;
@property (copy, nonatomic) id /* block */ responseHandler;
@property (copy, nonatomic) id /* block */ textResponseHandler;
@property (copy, nonatomic) id /* block */ dictionaryResponseHandler;
@property (retain, nonatomic) NSDictionary *additionalInfo;
@property (nonatomic) BOOL asBanner;
@property (retain, nonatomic) NSURL *iconURL;
@property (retain, nonatomic) NSString *message;
@property (retain, nonatomic) NSURL *soundURL;
@property (nonatomic) BOOL textInput;
@property (retain, nonatomic) NSString *textInputTitle;
@property (nonatomic) double timeout;
@property (retain, nonatomic) NSString *title;
@property (nonatomic) BOOL hasDefaultButton;
@property (retain, nonatomic) NSString *defaultButtonTitle;
@property (retain, nonatomic) NSString *alternateButtonTitle;
@property (retain, nonatomic) NSString *otherButtonTitle;

+ (BOOL)supportsSecureCoding;

- (void)present;
- (void)_ensureXPCStarted;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)userNotificationError:(id)a0;
- (void)userNotificationResponse:(int)a0;
- (void)userNotificationTextResponse:(id)a0;
- (void)userNotificationDictionaryResponse:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)_invalidated;
- (void)_present;
- (void)_invalidate;
- (void)_postNotification:(struct __CFUserNotification { } *)a0;
- (void)_interrupted;
- (void)_presentBanner;
- (struct __CFUserNotification { } *)createNotification;
- (id)_mergedDict;
- (id)_defaultDictionary;
- (void)_handleResponseForNotification:(struct __CFUserNotification { } *)a0 flags:(unsigned long long)a1;
- (void)_updateNotification;
- (void)invalidate;
- (void)encodeWithCoder:(id)a0;

@end
