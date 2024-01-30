@class SBFolder, NSString, NSHashTable, NSMutableSet;

@interface SBFolderIcon : SBIcon <SBFolderObserver, SBIconObserver, SBIconIndexNodeObserver> {
    NSHashTable *_nodeObservers;
    NSMutableSet *_finishedDownloadIdentifiers;
    long long _progressState;
    double _progressPercent;
    struct __CFRunLoopObserver { } *_updateIconRunLoopObserver;
}

@property (readonly, nonatomic) SBFolder *folder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)hasIconImage;

- (BOOL)isFolderIcon;
- (void)node:(id)a0 didRemoveContainedNodeIdentifiers:(id)a1;
- (void)addNodeObserver:(id)a0;
- (void)localeChanged;
- (void)folder:(id)a0 didAddIcons:(id)a1 removedIcons:(id)a2;
- (id)genericIconImageWithInfo:(struct SBIconImageInfo { struct CGSize { double x0; double x1; } x0; double x1; double x2; })a0;
- (id)badgeNumberOrString;
- (BOOL)shouldAnimateProgress;
- (void)rootFolderDelegateDidChange:(id)a0;
- (void)invalidateUpdateIconRunLoopObserver;
- (void)removeNodeObserver:(id)a0;
- (unsigned long long)listIndexForContainedIcon:(id)a0;
- (void)node:(id)a0 didAddContainedNodeIdentifiers:(id)a1;
- (id)nodeDescriptionWithPrefix:(id)a0;
- (void)folder:(id)a0 didRemoveLists:(id)a1 atIndexes:(id)a2;
- (Class)iconImageViewClassForLocation:(id)a0;
- (void)iconLaunchEnabledDidChange:(id)a0;
- (void).cxx_destruct;
- (long long)progressState;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)iconAccessoriesDidUpdate:(id)a0;
- (id)leafIconsWithBadgesSortedByImportance;
- (void)updateLabel;
- (void)dealloc;
- (id)nodesAlongIndexPath:(id)a0 consumedIndexes:(unsigned long long)a1;
- (void)iconImageDidUpdate:(id)a0;
- (void)_updateProgress;
- (void)_adjustForIconsAdded:(id)a0 removed:(id)a1;
- (unsigned long long)gridCellIndexForIconIndex:(unsigned long long)a0;
- (void)_containedIconAccessoriesDidUpdate:(id)a0;
- (void)nodeDidMoveContainedNodes:(id)a0;
- (void)_updateBadgeValue;
- (void)folder:(id)a0 didAddList:(id)a1;
- (id)rootFolder;
- (BOOL)isProgressPaused;
- (void)_containedIconLaunchEnabledDidUpdate:(id)a0;
- (id)displayNameForLocation:(id)a0;
- (void)folder:(id)a0 didReplaceIcon:(id)a1 withIcon:(id)a2;
- (void)noteContainedIcon:(id)a0 replacedIcon:(id)a1;
- (void)noteContainedIconsAdded:(id)a0 removed:(id)a1;
- (void)_containedIconImageChanged:(id)a0;
- (id)indexPathsForContainedNodeIdentifier:(id)a0 prefixPath:(id)a1;
- (id)generateIconImageWithInfo:(struct SBIconImageInfo { struct CGSize { double x0; double x1; } x0; double x1; double x2; })a0;
- (void)_performDelayedIconUpdates;
- (BOOL)canBeAddedToMultiItemDrag;
- (BOOL)containsNodeIdentifier:(id)a0;
- (id)iconAtListIndex:(unsigned long long)a0 iconIndex:(unsigned long long)a1;
- (double)progressPercent;
- (id)containedNodeIdentifiers;
- (id)initWithFolder:(id)a0;
- (BOOL)canBeAddedToSubfolder;
- (id)nodeIdentifier;

@end
