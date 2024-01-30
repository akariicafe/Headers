@class UICollectionViewDropProposal, NSIndexPath;

@interface _UIDragDestinationControllerDropProposalState : NSObject

@property (nonatomic) BOOL didDrop;
@property (retain, nonatomic) UICollectionViewDropProposal *proposal;
@property (retain, nonatomic) NSIndexPath *indexPath;
@property (readonly, nonatomic) NSIndexPath *effectiveIndexPath;

- (id)description;
- (void).cxx_destruct;
- (id)init;
- (void)didPerformDrop;
- (void)updateFromDropProposal:(id)a0;
- (BOOL)_hasDropActionTarget;

@end
