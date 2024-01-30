@class NSString;

@interface VCStreamOutput : VCObject <VCStreamSychronizationDelegate> {
    struct opaqueVCRemoteImageQueue { } *_remoteQueue;
    int _clientProcessID;
    struct __CFDictionary { } *_attributes;
    id _synchronizationDelegate;
}

@property (readonly, nonatomic) long long streamToken;
@property (nonatomic) float synchronizationTimeOffset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setSynchronizationDelegate:(id)a0;
- (id)synchronizationDelegate;
- (BOOL)enqueueSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0;
- (void)dealloc;
- (BOOL)createRemoteQueue;
- (id)initWithStreamToken:(long long)a0 clientProcessID:(int)a1 synchronizationDelegate:(id)a2;
- (id)copyXpcSenderQueue;
- (BOOL)enqueueAttributes:(struct __CFDictionary { } *)a0;

@end
