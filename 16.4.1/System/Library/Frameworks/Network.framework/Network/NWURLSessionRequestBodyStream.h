@class NSString, NWURLSessionReadRequest, NSObject, NSInputStream;
@protocol OS_dispatch_queue;

@interface NWURLSessionRequestBodyStream : NSObject <NSStreamDelegate, NWURLSessionRequestBodyProvider> {
    BOOL _streamIsSetup;
    NSInputStream *_stream;
    unsigned long long _offset;
    NSObject<OS_dispatch_queue> *_queue;
    NWURLSessionReadRequest *_readRequest;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)stream:(id)a0 handleEvent:(unsigned long long)a1;
- (void).cxx_destruct;
- (void)readMinimumIncompleteLength:(unsigned long long)a0 maximumLength:(unsigned long long)a1 completionHandler:(id /* block */)a2;

@end
