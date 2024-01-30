@class NSData;

@interface _BKSHIDEventAuthenticationKey : NSObject {
    NSData *_keyData;
    struct { unsigned int ctx[96]; } _hmacContext;
    struct atomic_flag { _Atomic BOOL _Value; } _hmacInitialized;
}

- (void).cxx_destruct;

@end
