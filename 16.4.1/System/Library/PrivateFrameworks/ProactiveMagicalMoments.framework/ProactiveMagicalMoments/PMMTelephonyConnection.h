@interface PMMTelephonyConnection : NSObject {
    struct __CTServerConnection { } *_ctServerConnnectionRef;
}

@property (readonly, nonatomic) BOOL phoneCallActiveOrHeld;

- (void)dealloc;
- (id)init;

@end
