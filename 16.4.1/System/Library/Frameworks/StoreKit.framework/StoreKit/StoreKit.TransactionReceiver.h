@interface StoreKit.TransactionReceiver : SwiftNativeNSObject <SKTransactionReceiverProtocol> {
    void /* unknown type, empty encoding */ continuation;
    void /* unknown type, empty encoding */ logKey;
}

- (void)receivedTransactions:(id)a0;
- (id)init;

@end
