@class TLTimelineEntryNode, TLTimelineWindow, NSTimer, NSDate;
@protocol TLTimelineEntry, TLTimelineDelegate;

@interface TLTimeline : NSObject <NSSecureCoding, NSCopying> {
    TLTimelineEntryNode *_leftmostNode;
    TLTimelineEntryNode *_rightmostNode;
    TLTimelineWindow *_nowWindow;
    NSTimer *_timer;
    BOOL _delegateRespondsToTimerFired;
    BOOL _updatesNowNodeOnSignificantTimeChange;
    int _notifyToken;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL paused;
@property (weak, nonatomic) id<TLTimelineDelegate> delegate;
@property (readonly, nonatomic) NSDate *dateOfLastEntryInTimeline;
@property (nonatomic) BOOL updatesNowNodeOnSignificantTimeChange;
@property (readonly, nonatomic) id<TLTimelineEntry> lastEntry;
@property (readonly, nonatomic) long long nodeCapacity;
@property (readonly, nonatomic) id<TLTimelineEntry> nowEntry;
@property (readonly, nonatomic) NSDate *endOfVisibilityForNowEntry;

+ (id)TLTimelineSegmentFromSortedEntries:(id)a0 withLowerBound:(id)a1 upperBound:(id)a2;

- (void)_timerFired;
- (void)_updateTimer;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithEntry:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)resetWithEntry:(id)a0;
- (id)_rightmostDate;
- (void)extendTimelineFromDate:(id)a0 withEntries:(id)a1;
- (id)initWithWindow:(id)a0 paused:(BOOL)a1;
- (void)_recycleAllNodes;
- (void)_updateNowWindow;
- (id)nowWindow;
- (void)_setupWithEntry:(id)a0;
- (void)extendRightFromDate:(id)a0 withEntries:(id)a1;
- (id)_nowNode;
- (id)_sortedEntries:(id)a0;
- (id)_nowEntry;
- (id)entriesWithinDateInterval:(id)a0;

@end
