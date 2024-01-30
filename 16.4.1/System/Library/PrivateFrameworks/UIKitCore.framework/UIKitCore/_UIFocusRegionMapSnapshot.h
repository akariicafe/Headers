@class NSArray, _UIFocusRegionMapSnapshotRequest, UIImage, UIView, NSMutableArray;

@interface _UIFocusRegionMapSnapshot : NSObject <NSCopying> {
    BOOL _isFocusedRectEmpty;
    BOOL _didSetRegionClipFrame;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _regionClipFrame;
}

@property (retain, nonatomic) NSMutableArray *detectedFocusableViewMapEntries;
@property (retain, nonatomic) NSMutableArray *detectedFocusableGuideMapEntries;
@property (retain, nonatomic) NSMutableArray *detectedFocusContainerGuideMapEntries;
@property (retain, nonatomic) NSMutableArray *retainedPromiseRegions;
@property (nonatomic, getter=isCommitted) BOOL committed;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } focusedRect;
@property (nonatomic) unsigned long long focusHeading;
@property (nonatomic) BOOL clipToSnapshotRect;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } visualRepresentationMinimumArea;
@property (weak, nonatomic) UIView *focusableRegionAncestorView;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } mapEntriesFrame;
@property (nonatomic) struct CGPoint { double x; double y; } visualRepresentationScreenCenter;
@property (copy, nonatomic) NSArray *finalFocusableRegionMapEntries;
@property (copy, nonatomic) NSArray *sortedFocusContainerGuideMapEntries;
@property (readonly, copy, nonatomic) _UIFocusRegionMapSnapshotRequest *request;
@property (readonly, weak, nonatomic) UIView *rootView;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } snapshottedRect;
@property (nonatomic, getter=isPrivateSnapshot) BOOL privateSnaphot;
@property (readonly, copy, nonatomic) NSArray *allFocusableRegionMapEntries;
@property (readonly, nonatomic) UIImage *visualRepresentation;

+ (id)combinedVisualRepresentationForSnapshots:(id)a0 scaleFactor:(double)a1;

- (void)_commit;
- (id)debugQuickLookObject;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)_didChooseFocusCandidateRegion:(id)a0;
- (void)_addFocusContainerGuide:(id)a0 withFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)_addFocusableRegion:(id)a0 isFocusGuide:(BOOL)a1 withFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_clippedRegionFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 isFocusGuide:(BOOL)a1;
- (id)_finalFocusableRegionMapEntriesFromMapEntries:(id)a0;
- (id)_finalFocusableRegionMapEntriesFromViewMapEntries:(id)a0 guideMapEntries:(id)a1;
- (id)_initWithRequest:(id)a0;
- (void)_occludeFocusInFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_punchHoleInMap:(id)a0 atFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)_snapshotByFulfillingPromiseFocusRegionEntry:(id)a0;
- (id)_sortedEligibleFocusContainerGuidesInArray:(id)a0;
- (void)_updateFinalFocusableRegionMapEntries;
- (void)_updateSortedFocusContainerGuideMapEntries;
- (id)focusableRegionMapEntriesLimitedByFocusContainerGuide:(id)a0;
- (id)visualRepresentationWithMinimumArea:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
