@class NSMapTable, NSObject;
@protocol OS_dispatch_queue;

@interface OspreyConnectionPool : NSObject {
    NSObject<OS_dispatch_queue> *_poolQueue;
    NSMapTable *_connectionMap;
}

- (void).cxx_destruct;
- (id)init;
- (id)connectionForConfiguration:(id)a0;

@end
