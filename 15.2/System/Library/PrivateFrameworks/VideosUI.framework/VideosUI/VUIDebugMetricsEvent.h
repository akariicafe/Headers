@class NSArray, NSDictionary, NSString, NSDate;

@interface VUIDebugMetricsEvent : NSObject

@property (retain, nonatomic) NSDictionary *rawData;
@property (retain, nonatomic) NSArray *eventData;
@property (retain, nonatomic) NSArray *sortedPageKeys;
@property (retain, nonatomic) NSArray *sortedPrimaryKeys;
@property (readonly, nonatomic) NSDate *eventDate;
@property (readonly, nonatomic) NSString *eventType;
@property (readonly, nonatomic) NSString *pageContext;
@property (readonly, nonatomic) NSDictionary *rawEvent;

- (void).cxx_destruct;
- (id)objectForKeyedSubscript:(id)a0;
- (id)_sortKeys:(id)a0;
- (id)initWithEventDictionary:(id)a0 termCollater:(id)a1;

@end
