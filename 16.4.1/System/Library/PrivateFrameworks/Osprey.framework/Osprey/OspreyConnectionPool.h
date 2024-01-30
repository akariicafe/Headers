@class NSMapTable, NSObject;
@protocol OS_dispatch_queue;

@interface OspreyConnectionPool : NSObject {
    NSObject<OS_dispatch_queue> *_poolQueue;
    NSMapTable *_connectionMap;
}

- (id)init;
- (void).cxx_destruct;
- (id)connectionForConfiguration:(id)a0;

@end
