@protocol CATSharingDeviceSession, CATDictionaryCodable;

@interface CATSendDeviceSessionMessageOperation : CATOperation {
    id<CATSharingDeviceSession> mDeviceSession;
    id<CATDictionaryCodable> mMessage;
}

- (void)main;
- (BOOL)isAsynchronous;
- (void).cxx_destruct;
- (id)initWithDeviceSession:(id)a0 message:(id)a1;
- (void)sendMessage;

@end
