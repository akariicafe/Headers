@class UICollectionViewDropProposal, NSIndexPath;

@interface _UIDragDestinationControllerDropProposalState : NSObject

@property (nonatomic) BOOL didDrop;
@property (retain, nonatomic) UICollectionViewDropProposal *proposal;
@property (retain, nonatomic) NSIndexPath *indexPath;
@property (readonly, nonatomic) NSIndexPath *effectiveIndexPath;

- (id)init;
- (id)description;
- (void).cxx_destruct;
- (BOOL)_hasDropActionTarget;
- (void)didPerformDrop;
- (void)updateFromDropProposal:(id)a0;

@end
