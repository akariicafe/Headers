@class NSObject;
@protocol OS_dispatch_queue;

@interface HKCoreTelephonyUtilities : NSObject {
    struct __CTServerConnection { } *_ctServerConnection;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *ctServerQueue;

- (void).cxx_destruct;
- (id)init;
- (struct __CTServerConnection { } *)ctServerConnection;
- (void)dealloc;
- (BOOL)isEmergencyServicePhoneNumber:(id)a0;

@end
