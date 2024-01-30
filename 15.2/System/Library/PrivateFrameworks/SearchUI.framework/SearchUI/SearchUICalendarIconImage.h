@class NSDate;

@interface SearchUICalendarIconImage : SearchUIAppIconImage

@property (nonatomic) BOOL isCurrentDate;
@property (retain, nonatomic) NSDate *date;

- (id)loadImageWithScale:(double)a0 isDarkStyle:(BOOL)a1;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithCurrentDateAndVariant:(unsigned long long)a0;
- (BOOL)shouldInvalidateAppIconForChangedBundleIdentifier:(id)a0;
- (void)invalidateAppIcon;
- (id)initWithDate:(id)a0 variant:(unsigned long long)a1;

@end
