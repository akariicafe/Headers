@class EKSeriesDetails;

@interface EKPostSliceDescription : EKSliceDescription

@property (copy) EKSeriesDetails *updatedMainSeriesDetails;
@property (copy) EKSeriesDetails *createdSeriesDetails;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
