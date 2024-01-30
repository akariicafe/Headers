@class NSDate;

@interface NWCComplicationTimelineEntryModel : NSObject

@property (readonly, nonatomic) NSDate *entryDate;

- (void).cxx_destruct;
- (id)initWithEntryDate:(id)a0;
- (id)templateForComplicationFamily:(long long)a0;
- (id)timelineEntryForComplicationFamily:(long long)a0;

@end
