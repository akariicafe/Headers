@class NSMutableArray;

@interface _UITableViewDeleteAnimationSupport : NSObject {
    NSMutableArray *_cellsToDeleteAfterAnimation;
    int _deleteCount;
    unsigned char _enabledStateBeforeDeleteAnimation : 1;
    unsigned int _reserved : 30;
}

- (void).cxx_destruct;

@end
