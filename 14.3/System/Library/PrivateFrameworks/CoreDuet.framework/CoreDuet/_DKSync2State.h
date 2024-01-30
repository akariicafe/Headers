@class NSMutableArray, _DKSyncType, _DKSyncCompositeOperation;

@interface _DKSync2State : NSObject {
    BOOL _isPending;
    _DKSyncType *_type;
    _DKSyncCompositeOperation *_parent;
    NSMutableArray *_completions;
}

- (void).cxx_destruct;

@end
