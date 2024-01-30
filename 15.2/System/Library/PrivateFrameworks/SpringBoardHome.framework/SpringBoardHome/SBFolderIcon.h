@class SBFolder, NSString, NSHashTable;

@interface SBFolderIcon : SBIcon <SBFolderObserver, SBIconObserver, SBIconIndexNodeObserver> {
    NSHashTable *_nodeObservers;
    long long _progressState;
    double _progressPercent;
    struct __CFRunLoopObserver { } *_updateIconRunLoopObserver;
    BOOL _delayedIconUpdates;
}

@property (readonly, nonatomic) SBFolder *folder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)hasIconImage;

- (void)folder:(id)a0 didAddList:(id)a1;
- (id)nodesAlongIndexPath:(id)a0 consumedIndexes:(unsigned long long)a1;
- (void)_containedIconImageChanged:(id)a0;
- (void)folder:(id)a0 didAddIcons:(id)a1 removedIcons:(id)a2;
- (id)leafIconsWithBadgesSortedByImportance;
- (void)removeNodeObserver:(id)a0;
- (void)noteContainedIcon:(id)a0 replacedIcon:(id)a1;
- (void)updateLabel;
- (void)iconImageDidUpdate:(id)a0;
- (void)_adjustForIconsAdded:(id)a0 removed:(id)a1;
- (id)iconAtListIndex:(unsigned long long)a0 iconIndex:(unsigned long long)a1;
- (BOOL)isFolderIcon;
- (id)initWithFolder:(id)a0;
- (void)rootFolderDelegateDidChange:(id)a0;
- (void)node:(id)a0 didRemoveContainedNodeIdentifiers:(id)a1;
- (void)folder:(id)a0 didReplaceIcon:(id)a1 withIcon:(id)a2;
- (Class)iconImageViewClassForLocation:(id)a0;
- (void)noteContainedIconsAdded:(id)a0 removed:(id)a1;
- (void)_updateBadgeValue;
- (id)nodeIdentifier;
- (id)displayNameForLocation:(id)a0;
- (id)genericIconImageWithInfo:(struct SBIconImageInfo { struct CGSize { double x0; double x1; } x0; double x1; double x2; })a0;
- (BOOL)canBeAddedToSubfolder;
- (void).cxx_destruct;
- (void)iconLaunchEnabledDidChange:(id)a0;
- (id)containedNodeIdentifiers;
- (id)nodeDescriptionWithPrefix:(id)a0;
- (id)badgeNumberOrString;
- (unsigned long long)gridCellIndexForIconIndex:(unsigned long long)a0;
- (id)indexPathsForContainedNodeIdentifier:(id)a0 prefixPath:(id)a1;
- (BOOL)containsNodeIdentifier:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_performDelayedIconUpdates;
- (id)generateIconImageWithInfo:(struct SBIconImageInfo { struct CGSize { double x0; double x1; } x0; double x1; double x2; })a0;
- (void)nodeDidMoveContainedNodes:(id)a0;
- (long long)progressState;
- (void)scheduleUpdateIconRunLoopObserver;
- (id)rootFolder;
- (void)localeChanged;
- (void)_containedIconAccessoriesDidUpdate:(id)a0;
- (void)dealloc;
- (BOOL)isProgressPaused;
- (unsigned long long)listIndexForContainedIcon:(id)a0;
- (void)_updateProgress;
- (void)iconAccessoriesDidUpdate:(id)a0;
- (void)node:(id)a0 didAddContainedNodeIdentifiers:(id)a1;
- (double)progressPercent;
- (void)addNodeObserver:(id)a0;
- (void)invalidateUpdateIconRunLoopObserver;
- (void)folder:(id)a0 didRemoveLists:(id)a1 atIndexes:(id)a2;
- (void)_containedIconLaunchEnabledDidUpdate:(id)a0;
- (BOOL)canBeAddedToMultiItemDrag;

@end
