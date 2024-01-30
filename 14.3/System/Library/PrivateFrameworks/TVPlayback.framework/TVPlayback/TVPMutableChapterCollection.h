@class NSString, NSArray, NSURL, NSDate;

@interface TVPMutableChapterCollection : TVPChapterCollection

@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) NSArray *chapters;
@property (nonatomic) long long type;
@property (retain, nonatomic) id backingData;
@property (retain, nonatomic) NSDate *startDate;
@property (nonatomic) BOOL shouldStartPlaybackFromStartDate;
@property (nonatomic) BOOL shouldDisplayChapterMarkers;
@property (nonatomic) BOOL shouldShowDescriptionOnChapterSkip;
@property (nonatomic) double refreshInterval;
@property (copy, nonatomic) NSURL *refreshURL;

@end
