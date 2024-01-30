@class NSArray, NSString, UITableViewDropProposal, NSIndexPath;
@protocol _UITableViewDropCoordinatorDelegate, UIDropSession;

@interface _UITableViewDropCoordinatorImpl : NSObject <_UITableViewDropCoordinator>

@property (weak, nonatomic) id<_UITableViewDropCoordinatorDelegate> delegate;
@property (retain, nonatomic) NSArray *items;
@property (retain, nonatomic) NSIndexPath *destinationIndexPath;
@property (retain, nonatomic, getter=_translatedDestinationIndexPath, setter=_setTranslatedDestinationIndexPath:) NSIndexPath *translatedDestinationIndexPath;
@property (retain, nonatomic) UITableViewDropProposal *proposal;
@property (retain, nonatomic) id<UIDropSession> session;
@property (readonly, nonatomic) NSArray *_items;
@property (readonly, nonatomic) NSIndexPath *_destinationIndexPath;
@property (readonly, nonatomic) UITableViewDropProposal *_dropProposal;
@property (readonly, nonatomic) id<UIDropSession> _dropSession;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_dropItem:(id)a0 toPlaceholderInsertedAtIndexPath:(id)a1 withReuseIdentifier:(id)a2 rowHeight:(double)a3 cellUpdateHandler:(id /* block */)a4;
- (id)dropItem:(id)a0 toPlaceholderInsertedAtIndexPath:(id)a1 withReuseIdentifier:(id)a2 rowHeight:(double)a3 cellUpdateHandler:(id /* block */)a4;
- (void).cxx_destruct;
- (id)dropItem:(id)a0 toTarget:(id)a1;
- (id)initWithDelegate:(id)a0 destinationIndexPath:(id)a1 dropProposal:(id)a2 session:(id)a3;
- (id)_sourceIndexPaths;
- (void)_dropItem:(id)a0 toTarget:(id)a1;
- (id)dropItem:(id)a0 toRowAtIndexPath:(id)a1;
- (id)dropItem:(id)a0 intoRowAtIndexPath:(id)a1 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void)_dropItem:(id)a0 toRowAtIndexPath:(id)a1;
- (void)_translateDestinationIndexPath:(id /* block */)a0;
- (void)_translateSourceIndexPathsOfDropItems:(id /* block */)a0;
- (void)_dropItem:(id)a0 toCell:(id)a1 withPreviewParameters:(id)a2;
- (id)dropItem:(id)a0 toPlaceholder:(id)a1;

@end
