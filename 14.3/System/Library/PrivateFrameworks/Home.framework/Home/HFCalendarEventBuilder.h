@class NSString, NSDateComponents, NSDate;

@interface HFCalendarEventBuilder : HFEventBuilder <HFTimeEventBuilder>

@property (copy, nonatomic) NSDate *fireDate;
@property (copy, nonatomic) NSDateComponents *fireTimeComponents;
@property (readonly, nonatomic) NSDate *effectiveFireDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithEvent:(id)a0;
- (id)naturalLanguageNameOfType:(unsigned long long)a0 withHome:(id)a1 recurrences:(id)a2;
- (id)naturalLanguageWithOptions:(id)a0 recurrences:(id)a1;
- (id)performValidation;
- (void)updateBaseFireDateForTrigger;
- (id)buildNewEventFromCurrentState;
- (id)effectiveFireTimeComponents;
- (id)_fireDateForTimeComponents:(id)a0;

@end
