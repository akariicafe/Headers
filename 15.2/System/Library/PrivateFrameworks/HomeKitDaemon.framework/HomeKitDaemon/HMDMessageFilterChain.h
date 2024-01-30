@class NSArray, NSMutableArray;
@protocol HMFLocking;

@interface HMDMessageFilterChain : HMFObject {
    id<HMFLocking> _lock;
    NSMutableArray *_filters;
}

@property (readonly, copy, nonatomic) NSArray *filters;

- (void).cxx_destruct;
- (id)init;
- (void)addMessageFilter:(id)a0;
- (BOOL)acceptMessage:(id)a0 error:(id *)a1;
- (BOOL)shouldCloudSyncData;
- (void)removeMessageFilter:(id)a0;
- (void)resetConfiguration:(id)a0 completionHandler:(id /* block */)a1;

@end
