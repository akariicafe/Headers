@class _SWCollaborationButtonView, SFCollaborationUnifiedBarItemView;

@interface SFCollaborationUnifiedBarItem : SFUnifiedBarItem {
    SFCollaborationUnifiedBarItemView *_view;
}

@property (retain, nonatomic) _SWCollaborationButtonView *collaborationButton;

- (id)view;
- (id)init;
- (void).cxx_destruct;

@end
