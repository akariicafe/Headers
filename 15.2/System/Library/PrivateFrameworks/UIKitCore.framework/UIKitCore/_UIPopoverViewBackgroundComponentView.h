@class NSString, NSMutableArray;

@interface _UIPopoverViewBackgroundComponentView : UIView {
    NSMutableArray *_replicants;
}

@property (copy, nonatomic) NSString *directionSelector;

- (BOOL)_shouldAnimatePropertyWithKey:(id)a0;
- (id)replicate;
- (id)_newReplicant;
- (void)updateReplicants;
- (void).cxx_destruct;

@end
