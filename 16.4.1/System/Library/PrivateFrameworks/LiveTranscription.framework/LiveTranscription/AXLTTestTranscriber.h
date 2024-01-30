@class NSString, NSObject;
@protocol OS_dispatch_source, AXLTTranscriberDelegateProtocol;

@interface AXLTTestTranscriber : NSObject <AXLTTranscriberProtocol>

@property (weak, nonatomic) id<AXLTTranscriberDelegateProtocol> delegate;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *dispatchSource;
@property (nonatomic) BOOL isTranscribing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDelegate:(id)a0;
- (void).cxx_destruct;
- (void)resetTranscription;
- (BOOL)startTranscription:(id *)a0;
- (BOOL)stopTranscription:(id *)a0;

@end
