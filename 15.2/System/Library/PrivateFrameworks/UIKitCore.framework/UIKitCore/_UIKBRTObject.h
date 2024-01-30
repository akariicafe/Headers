@class NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface _UIKBRTObject : NSObject {
    NSMutableArray *_owner;
    NSObject<OS_dispatch_queue> *_syncQueue;
}

- (void)setOwner:(id)a0;
- (id)nextEntry;
- (void).cxx_destruct;
- (id)owner;
- (id)previousEntry;

@end
