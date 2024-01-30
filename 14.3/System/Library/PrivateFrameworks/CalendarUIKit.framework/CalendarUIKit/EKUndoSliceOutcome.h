@class EKEvent, EKSeriesDetails, EKPostSliceDescription;

@interface EKUndoSliceOutcome : NSObject <NSCopying>

@property (copy) EKEvent *masterToDelete;
@property (copy) EKSeriesDetails *mainSeriesDetails;
@property (copy) EKSeriesDetails *createdSeriesDetails;
@property (readonly) EKPostSliceDescription *originalPostSliceDescription;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
