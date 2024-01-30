@class NSObject, BRLTSTranslator, NSXPCInterface;
@protocol OS_dispatch_queue;

@interface BRLTSTranslationService : NSObject <BRLTTranslationServiceInterface>

@property (class, readonly, nonatomic) NSXPCInterface *exportedInterface;

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) BRLTSTranslator *queueTranslator;

- (void).cxx_destruct;
- (id)init;
- (void)loadBrailleBundleForIdentifier:(id)a0;
- (void)brailleForText:(id)a0 parameters:(id)a1 withReply:(id /* block */)a2;
- (void)textForBraille:(id)a0 parameters:(id)a1 withReply:(id /* block */)a2;

@end
