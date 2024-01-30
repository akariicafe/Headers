@class NSString, NSMutableArray;

@interface _UIPopoverViewBackgroundComponentView : UIView {
    NSMutableArray *_replicants;
}

@property (copy, nonatomic) NSString *directionSelector;

- (id)replicate;
- (void).cxx_destruct;
- (BOOL)_shouldAnimatePropertyWithKey:(id)a0;
- (id)_newReplicant;
- (void)updateReplicants;

@end
