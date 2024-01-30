@class NSDate;

@interface NTKTimelineEntryModel : NSObject

@property (retain, nonatomic) NSDate *entryDate;

- (void).cxx_destruct;
- (id)entryForComplicationFamily:(long long)a0;
- (id)templateForComplicationFamily:(long long)a0;

@end
