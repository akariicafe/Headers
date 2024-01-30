@class NSString, NSMutableArray;

@interface _UIPopoverViewBackgroundComponentView : UIView {
    NSMutableArray *_replicants;
}

@property (copy, nonatomic) NSString *directionSelector;

- (BOOL)_shouldAnimatePropertyWithKey:(id)a0;
- (id)replicate;
- (void).cxx_destruct;
- (id)_newReplicant;
- (void)updateReplicants;

@end
