@class EKEvent, NSArray, NSSet;

@interface EKSeriesDetails : NSObject <NSCopying>

@property (retain) EKEvent *masterEvent;
@property (retain) NSArray *detachedEvents;
@property (retain) NSSet *exceptionDates;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
