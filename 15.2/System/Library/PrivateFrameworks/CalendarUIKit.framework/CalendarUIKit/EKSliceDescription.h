@class EKEvent, EKSeriesDetails;

@interface EKSliceDescription : NSObject <NSCopying>

@property (retain) EKEvent *originalEventToSliceOn;
@property (retain) EKSeriesDetails *originalMainSeriesDetails;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
