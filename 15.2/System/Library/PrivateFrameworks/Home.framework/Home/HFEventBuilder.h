@class NSString;

@interface HFEventBuilder : NSObject <HFComparable>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSString *eventType;

+ (id)eventBuilderForEvent:(id)a0;

- (id)initWithEvent:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)comparisonKey;
- (id)buildNewEventsFromCurrentState;
- (id)naturalLanguageNameWithOptions:(id)a0;
- (id)compareToObject:(id)a0;

@end
