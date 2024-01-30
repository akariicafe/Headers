@class NSString;
@protocol NFAccessoryReaderSessionDelegate;

@interface NFAccessoryReaderSession : NFAccessorySession <NFReaderSessionAccessoryCallbacks> {
    id<NFAccessoryReaderSessionDelegate> _delegate;
}

@property (weak) id<NFAccessoryReaderSessionDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;

- (BOOL)connectTag:(id)a0 error:(id *)a1;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)endSessionWithCompletion:(id /* block */)a0;
- (void)didEndUnexpectedly;
- (void)didTerminate:(id)a0;
- (BOOL)startPollingForTechnology:(unsigned int)a0 error:(id *)a1;
- (id)transceive:(id)a0 error:(id *)a1;
- (id)sendAccessoryProtocolCommand:(id)a0 outError:(id *)a1;
- (id)readTypeIdentifier:(id *)a0;
- (BOOL)disconnectTag:(id *)a0;
- (BOOL)stopPolling:(id *)a0;
- (BOOL)checkPresence:(id *)a0;
- (void)didDetectTags:(id)a0;
- (BOOL)startPolling:(id *)a0;
- (id)readNDEF:(id *)a0;
- (BOOL)checkNdefSupport:(BOOL *)a0 andWrite:(BOOL *)a1 error:(id *)a2;
- (id)sendAuthProtocolCommand:(id)a0 error:(id *)a1;
- (id)setTagDataRate:(int)a0;

@end
