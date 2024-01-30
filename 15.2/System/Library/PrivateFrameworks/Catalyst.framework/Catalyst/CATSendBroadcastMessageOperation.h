@protocol CATSharingBroadcastPrimitives, CATDictionaryCodable;

@interface CATSendBroadcastMessageOperation : CATOperation {
    id<CATSharingBroadcastPrimitives> mBroadcastPrimitives;
    id<CATDictionaryCodable> mMessage;
}

- (BOOL)isAsynchronous;
- (void)main;
- (void).cxx_destruct;
- (void)sendMessage;
- (id)initWithBroadcastPrimitive:(id)a0 message:(id)a1;

@end
