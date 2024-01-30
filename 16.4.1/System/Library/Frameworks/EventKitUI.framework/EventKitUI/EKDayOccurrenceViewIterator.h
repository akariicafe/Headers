@class NSArray, NSString;

@interface EKDayOccurrenceViewIterator : NSObject <EKBidirectionallyIterable>

@property long long currentIndex;
@property long long firstTimedOccurrenceIndex;
@property (retain, nonatomic) NSArray *occurrenceViews;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)next;
- (id)previous;
- (void).cxx_destruct;
- (long long)_firstTimedOccurrenceViewIndexInOccurrenceViews:(id)a0;
- (long long)_nextIndexFromCurrentIndex:(long long)a0 forward:(BOOL)a1;
- (id)_occurrenceViewAtIndex:(long long)a0;
- (void)_prepareOccurrenceViewsForIteration:(id)a0 selectedEvent:(id)a1 result:(id /* block */)a2;
- (long long)_selectedCopyOccurrenceViewIndexInOccurrenceViews:(id)a0 selectedIndex:(long long)a1;
- (long long)_selectedOccurrenceViewIndexInOccurrenceViews:(id)a0 selectedEvent:(id)a1;
- (void)_separateOccurrenceViews:(id)a0 result:(id /* block */)a1;
- (id)initWithOccurrenceViews:(id)a0 selectedEvent:(id)a1;

@end
