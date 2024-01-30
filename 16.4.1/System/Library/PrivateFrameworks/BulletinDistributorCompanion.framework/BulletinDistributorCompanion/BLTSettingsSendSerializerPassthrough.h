@protocol BLTSettingsSendSerializerDelegate;

@interface BLTSettingsSendSerializerPassthrough : NSObject

@property (weak, nonatomic) id<BLTSettingsSendSerializerDelegate> delegate;

- (void).cxx_destruct;
- (void)handleFileURL:(id)a0;
- (void)sendNowWithSent:(id /* block */)a0 withAcknowledgement:(id /* block */)a1 withTimeout:(id)a2;
- (void)sendRequest:(id)a0 type:(unsigned short)a1 withTimeout:(id)a2 withDescription:(id)a3 onlyOneFor:(id)a4 didSend:(id /* block */)a5 andResponse:(id /* block */)a6 spoolToFile:(BOOL)a7;

@end
