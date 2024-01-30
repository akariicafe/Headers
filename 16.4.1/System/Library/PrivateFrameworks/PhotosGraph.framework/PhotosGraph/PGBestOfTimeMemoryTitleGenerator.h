@class NSDate;

@interface PGBestOfTimeMemoryTitleGenerator : PGTitleGenerator

@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) NSDate *endDate;
@property (readonly, nonatomic) long long year;

- (void).cxx_destruct;
- (id)_bestOfPastTimeTitle;
- (id)_bestOfYearTitle;
- (id)_generateSubtitle;
- (void)_generateTitleAndSubtitleWithResult:(id /* block */)a0;
- (id)initWithStartDate:(id)a0 endDate:(id)a1 titleGenerationContext:(id)a2;
- (id)initWithYear:(long long)a0 titleGenerationContext:(id)a1;

@end
