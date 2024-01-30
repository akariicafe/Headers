@class EKEvent, EKSeriesDetails;

@interface EKSliceDescription : NSObject <NSCopying> {
    EKEvent *_originalEventToSliceOn;
}

@property (retain) EKEvent *originalEventToSliceOn;
@property (retain) EKSeriesDetails *originalMainSeriesDetails;

+ (id)sliceDescriptionForSlicingEvent:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;

@end
