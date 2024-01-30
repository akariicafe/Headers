@class NSString, NSObject, SFUCryptoKey;
@protocol TSUStreamReadChannel, OS_dispatch_queue;

@interface TSPCryptoTranscodeReadChannel : NSObject <TSUStreamReadChannel> {
    id<TSUStreamReadChannel> _readChannel;
    SFUCryptoKey *_encryptionKey;
    NSObject<OS_dispatch_queue> *_readQueue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
