@class NSMutableDictionary, NSMutableArray;

@interface SidecarTransferReceiver : SidecarTransfer {
    NSMutableDictionary *_groups;
    NSMutableArray *_orderedGroups;
}

- (void).cxx_destruct;
- (void)handleMessage:(id)a0;
- (id)initWithSession:(id)a0 requestID:(long long)a1;
- (id /* block */)_resumeMessage:(id)a0;

@end
