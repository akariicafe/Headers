@class NSData, HMEEventMetadata;

@interface HMEEvent : NSObject

@property (readonly, copy, nonatomic) NSData *eventData;
@property (readonly, copy) NSData *encodedData;
@property (readonly) HMEEventMetadata *eventMetadata;

+ (id)eventFromProtobuff:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (id)initWithSubclassedEventMetadata:(id)a0;
- (id)initWithEventData:(id)a0;
- (id)initWithEventData:(id)a0 metadata:(id)a1;
- (id)_initWithEventData:(id)a0 metadata:(id)a1;
- (id)pbEvent;

@end
