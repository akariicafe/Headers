@class NSObject;
@protocol DVTOutputStream, DVTInputStream, OS_dispatch_queue;

@interface DVTStreamManager : NSObject {
    id<DVTInputStream, DVTOutputStream> _stream;
    NSObject<OS_dispatch_queue> *_queue;
    unsigned long long _currentStreamSize;
}

@property (readonly) unsigned long long currentStreamSize;

- (id)initWithStream:(id)a0;
- (void).cxx_destruct;
- (id)export;
- (long long)commit:(id)a0 error:(id *)a1;
- (long long)commit:(const void *)a0 bufferSize:(unsigned long long)a1 error:(id *)a2 destructor:(id /* block */)a3;

@end
