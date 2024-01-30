@interface PMMTelephonyConnection : NSObject {
    struct __CTServerConnection { } *_ctServerConnnectionRef;
}

@property (readonly, nonatomic) BOOL phoneCallActiveOrHeld;

- (id)init;
- (void)dealloc;

@end
