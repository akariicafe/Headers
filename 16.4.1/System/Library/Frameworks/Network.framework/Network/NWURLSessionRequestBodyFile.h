@class NSString, NSObject;
@protocol OS_dispatch_io, OS_dispatch_queue;

@interface NWURLSessionRequestBodyFile : NSObject <NWURLSessionRequestBodyProvider> {
    int _error;
    NSObject<OS_dispatch_io> *_io;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)readMinimumIncompleteLength:(unsigned long long)a0 maximumLength:(unsigned long long)a1 completionHandler:(id /* block */)a2;

@end
