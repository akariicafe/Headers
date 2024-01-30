@class EKEvent, NSArray, NSSet;

@interface EKSeriesDetails : NSObject <NSCopying>

@property (retain) EKEvent *masterEvent;
@property (retain) NSArray *detachedEvents;
@property (retain) NSSet *exceptionDates;

- (id)initWithEvent:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithMasterEvent:(id)a0 detachedEvents:(id)a1 exceptionDates:(id)a2;

@end
