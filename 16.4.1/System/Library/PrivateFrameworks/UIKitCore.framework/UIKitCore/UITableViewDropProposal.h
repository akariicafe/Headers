@class NSIndexPath;

@interface UITableViewDropProposal : UIDropProposal

@property (nonatomic) long long intent;
@property (retain, nonatomic, getter=_adjustedTargetIndexPath, setter=_setAdjustedTargetIndexPath:) NSIndexPath *adjustedTargetIndexPath;
@property (readonly, nonatomic) long long _dropLocation;

- (void).cxx_destruct;
- (long long)_dropAction;
- (id)_updatedDropProposalWithDropOperation:(unsigned long long)a0 dropIntent:(long long)a1 adjustedTargetIndexPath:(id)a2;
- (id)initWithDropOperation:(unsigned long long)a0;
- (id)initWithDropOperation:(unsigned long long)a0 dropLocation:(long long)a1;
- (id)initWithDropOperation:(unsigned long long)a0 intent:(long long)a1;

@end
