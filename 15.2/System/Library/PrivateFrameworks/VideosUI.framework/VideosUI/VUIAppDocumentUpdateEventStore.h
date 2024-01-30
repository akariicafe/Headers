@class NSArray, NSMutableDictionary;

@interface VUIAppDocumentUpdateEventStore : NSObject

@property (retain, nonatomic) NSMutableDictionary *eventByEventDescriptor;
@property (readonly, copy, nonatomic) NSArray *events;

- (void)addEvents:(id)a0;
- (void)removeAllEvents;
- (id)description;
- (void)addEvent:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)removeEvent:(id)a0;

@end
