@interface ISTimestampedEvent : NSObject

@property (nonatomic, readonly) void /* unknown type, empty encoding */ timestamp;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ orderedEvent;

- (id)dictionaryRepresentation;
- (id)init;
- (void).cxx_destruct;

@end
