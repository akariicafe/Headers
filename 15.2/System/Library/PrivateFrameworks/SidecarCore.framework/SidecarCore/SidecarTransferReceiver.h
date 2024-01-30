@class NSMutableDictionary, NSMutableArray;

@interface SidecarTransferReceiver : SidecarTransfer {
    NSMutableDictionary *_groups;
    NSMutableArray *_orderedGroups;
}

- (void)handleMessage:(id)a0;
- (void).cxx_destruct;
- (id)initWithSession:(id)a0 requestID:(long long)a1;
- (id /* block */)_resumeMessage:(id)a0;

@end
