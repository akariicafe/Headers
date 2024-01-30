@class NSObject;
@protocol OS_dispatch_queue;

@interface HKCoreTelephonyUtilities : NSObject {
    struct __CTServerConnection { } *_ctServerConnection;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *ctServerQueue;

- (void)dealloc;
- (struct __CTServerConnection { } *)ctServerConnection;
- (id)init;
- (void).cxx_destruct;
- (BOOL)isEmergencyServicePhoneNumber:(id)a0;

@end
