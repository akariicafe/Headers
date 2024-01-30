@class NSString, NSDateComponents;

@interface HFSignificantTimeEventBuilder : HFEventBuilder <HFTimeEventBuilder>

@property (copy, nonatomic) NSString *significantEvent;
@property (copy, nonatomic) NSDateComponents *significantEventOffset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithEvent:(id)a0;
- (void).cxx_destruct;
- (id)eventType;
- (id)performValidation;
- (id)comparisonKey;
- (id)buildNewEventsFromCurrentState;
- (id)naturalLanguageNameWithOptions:(id)a0;
- (id)compareToObject:(id)a0;
- (id)naturalLanguageNameOfType:(unsigned long long)a0 withHome:(id)a1 recurrences:(id)a2;
- (id)naturalLanguageNameWithOptions:(id)a0 recurrences:(id)a1;

@end
