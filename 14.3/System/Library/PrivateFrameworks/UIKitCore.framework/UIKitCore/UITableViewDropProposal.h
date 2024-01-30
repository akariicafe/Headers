@class NSIndexPath;

@interface UITableViewDropProposal : UIDropProposal

@property (nonatomic) long long intent;
@property (retain, nonatomic, getter=_adjustedTargetIndexPath, setter=_setAdjustedTargetIndexPath:) NSIndexPath *adjustedTargetIndexPath;
@property (readonly, nonatomic) long long _dropLocation;

- (id)_updatedDropProposalWithDropOperation:(unsigned long long)a0 dropIntent:(long long)a1 adjustedTargetIndexPath:(id)a2;
- (void).cxx_destruct;
- (id)initWithDropOperation:(unsigned long long)a0 intent:(long long)a1;
- (id)initWithDropOperation:(unsigned long long)a0 dropLocation:(long long)a1;
- (long long)_dropAction;
- (id)initWithDropOperation:(unsigned long long)a0;

@end
