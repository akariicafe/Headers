@class NSURL;

@interface BLTSendQueueSerializer : NSObject

@property (copy, nonatomic) NSURL *sendFileURL;
@property (readonly, nonatomic) BOOL usesMessageIdentifiers;

- (void)cleanup;
- (void).cxx_destruct;
- (id)initWithUsesMessageIdentifiers:(BOOL)a0;
- (void)add:(id)a0 type:(unsigned short)a1;
- (void)add:(id)a0 type:(unsigned short)a1 messageIdentifier:(id *)a2;
- (BOOL)handleFileURL:(id)a0 protobufHandler:(id)a1;
- (void)sendWithSender:(id)a0 timeout:(id)a1 responseHandlers:(id)a2 didSend:(id /* block */)a3 didQueue:(id /* block */)a4;

@end
