@class NSObject;
@protocol OS_dispatch_queue;

@interface NTKDZIPArchivist : NSObject {
    NSObject<OS_dispatch_queue> *_unzipQueue;
}

- (id)init;
- (void).cxx_destruct;
- (void)unzipStream:(id)a0 toPath:(id)a1 completionHandler:(id /* block */)a2;
- (id)zippedDataForPath:(id)a0;

@end
