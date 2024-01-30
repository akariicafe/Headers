@protocol CATSharingBroadcastPrimitives, CATDictionaryCodable;

@interface CATSendBroadcastMessageOperation : CATOperation {
    id<CATSharingBroadcastPrimitives> mBroadcastPrimitives;
    id<CATDictionaryCodable> mMessage;
}

- (void)main;
- (BOOL)isAsynchronous;
- (void).cxx_destruct;
- (id)initWithBroadcastPrimitive:(id)a0 message:(id)a1;
- (void)sendMessage;

@end
