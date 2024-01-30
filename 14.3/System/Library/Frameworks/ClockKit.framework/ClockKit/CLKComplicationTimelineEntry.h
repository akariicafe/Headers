@class CLKComplicationTemplate, NSString, NSDate;

@interface CLKComplicationTimelineEntry : NSObject <CLKTimelineEntry>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL finalized;
@property (retain, nonatomic) NSDate *date;
@property (copy, nonatomic) CLKComplicationTemplate *complicationTemplate;
@property (copy, nonatomic) NSString *timelineAnimationGroup;
@property (retain, nonatomic, setter=tl_setEntryDate:) NSDate *tl_entryDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)entryWithDate:(id)a0 complicationTemplate:(id)a1;
+ (id)entryWithDate:(id)a0 complicationTemplate:(id)a1 timelineAnimationGroup:(id)a2;

- (BOOL)validateWithError:(id *)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (void)finalize;
- (void)encodeWithCoder:(id)a0;
- (id)finalizedCopy;
- (BOOL)tl_validate:(id *)a0;
- (BOOL)validateComplicationFamily:(long long)a0;

@end
