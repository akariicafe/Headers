@class NSDate;

@interface SearchUICalendarIconImage : SearchUIAppIconImage

@property (nonatomic) BOOL isCurrentDate;
@property (retain, nonatomic) NSDate *date;

- (id)loadImage;
- (id)initWithCurrentDateAndVariant:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)invalidateAppIcon;
- (unsigned long long)hash;
- (BOOL)shouldInvalidateAppIconForChangedBundleIdentifier:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithDate:(id)a0 variant:(unsigned long long)a1;

@end
