@class NSValue;

@interface ICAuthorHighlightsUpdater : NSObject {
    void /* unknown type, empty encoding */ focusedRange;
    void /* unknown type, empty encoding */ collaboratorStatuses;
    void /* unknown type, empty encoding */ showsCursorsUserPreference;
    void /* unknown type, empty encoding */ states;
    void /* unknown type, empty encoding */ $__lazy_storage_$_grouper;
    void /* unknown type, empty encoding */ updateTimer;
    void /* unknown type, empty encoding */ animatesScheduledUpdate;
    void /* unknown type, empty encoding */ isUpdating;
}

@property (nonatomic, retain) NSValue *focusedRangeValue;
@property (nonatomic, readonly) NSValue *highlightedRangeValue;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ authorHighlightsController;
@property (nonatomic) void /* unknown type, empty encoding */ highlightedValue;
@property (nonatomic, retain) void /* unknown type, empty encoding */ filter;
@property (nonatomic, readonly) BOOL showsCollaboratorStatuses;
@property (nonatomic) void /* unknown type, empty encoding */ updatesVisibleRangesOnly;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)updateAnimated:(BOOL)a0;
- (void)flashHighlightsForFilter:(id)a0;
- (void)flashHighlightsForRanges:(id)a0 inTextStorage:(id)a1;
- (id)initWithAuthorHighlightsController:(id)a0;
- (void)noteShowsCollaboratorCursorsDidChange:(id)a0;
- (void)scheduleUpdateAnimated:(BOOL)a0;

@end
