@class NSString, TVPTimeRange, TVPDateRange;

@interface TVPMutableChapter : TVPChapter

@property (copy, nonatomic) NSString *localizedName;
@property (copy, nonatomic) NSString *chapterDescription;
@property (retain, nonatomic) TVPTimeRange *timeRange;
@property (retain, nonatomic) TVPDateRange *dateRange;

@end
