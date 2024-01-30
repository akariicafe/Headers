@class NSArray, NSMutableDictionary;

@interface VUIAppDocumentUpdateEventStore : NSObject

@property (retain, nonatomic) NSMutableDictionary *eventByEventDescriptor;
@property (readonly, copy, nonatomic) NSArray *events;

- (void)addEvent:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)removeAllEvents;
- (id)description;
- (void)addEvents:(id)a0;
- (void)removeEvent:(id)a0;

@end
