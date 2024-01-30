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

- (id)genericIconImageWithInfo:(struct SBIconImageInfo { struct CGSize { double x0; double x1; } x0; double x1; double x2; })a0;
- (BOOL)canBeAddedToSubfolder;
- (void)_adjustForIconsAdded:(id)a0 removed:(id)a1;
- (BOOL)canBeAddedToMultiItemDrag;
- (id)indexPathsForContainedNodeIdentifier:(id)a0 prefixPath:(id)a1;
- (void)_updateBadgeValue;
- (id)containedNodeIdentifiers;
- (double)progressPercent;
- (id)nodeIdentifier;
- (void)localeChanged;
- (unsigned long long)listIndexForContainedIcon:(id)a0;
- (id)initWithFolderIcon:(id)a0 copyFolder:(BOOL)a1;
- (void)folder:(id)a0 didRemoveLists:(id)a1 atIndexes:(id)a2;
- (id)nodesAlongIndexPath:(id)a0 consumedIndexes:(unsigned long long)a1;
- (id)leafIconsWithBadgesSortedByImportance;
- (id)generateIconImageWithInfo:(struct SBIconImageInfo { struct CGSize { double x0; double x1; } x0; double x1; double x2; })a0;
- (Class)iconImageViewClassForLocation:(id)a0;
- (id)nodeDescriptionWithPrefix:(id)a0;
- (BOOL)isProgressPaused;
- (unsigned long long)gridCellIndexForIconIndex:(unsigned long long)a0;
- (id)iconAtListIndex:(unsigned long long)a0 iconIndex:(unsigned long long)a1;
- (void)noteContainedIconsAdded:(id)a0 removed:(id)a1;
- (void)iconImageDidUpdate:(id)a0;
- (void)updateLabel;
- (void)removeNodeObserver:(id)a0;
- (void)folder:(id)a0 didAddList:(id)a1;
- (id)initWithFolder:(id)a0;
- (id)rootFolder;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)containsNodeIdentifier:(id)a0;
- (void)_containedIconImageChanged:(id)a0;
- (void)_performDelayedIconUpdates;
- (void)node:(id)a0 didRemoveContainedNodeIdentifiers:(id)a1;
- (void)_containedIconLaunchEnabledDidUpdate:(id)a0;
- (void)addNodeObserver:(id)a0;
- (void)_containedIconAccessoriesDidUpdate:(id)a0;
- (id)badgeNumberOrString;
- (void)_updateProgress;
- (void)node:(id)a0 didAddContainedNodeIdentifiers:(id)a1;
- (void)scheduleUpdateIconRunLoopObserver;
- (void)iconLaunchEnabledDidChange:(id)a0;
- (void)dealloc;
- (void)iconAccessoriesDidUpdate:(id)a0;
- (id)displayNameForLocation:(id)a0;
- (BOOL)isFolderIcon;
- (void)folder:(id)a0 didAddIcons:(id)a1 removedIcons:(id)a2;
- (void)rootFolderDelegateDidChange:(id)a0;
- (void)nodeDidMoveContainedNodes:(id)a0;
- (long long)progressState;
- (void)noteContainedIcon:(id)a0 replacedIcon:(id)a1;
- (void)invalidateUpdateIconRunLoopObserver;
- (void).cxx_destruct;
- (void)folder:(id)a0 didReplaceIcon:(id)a1 withIcon:(id)a2;

@end
