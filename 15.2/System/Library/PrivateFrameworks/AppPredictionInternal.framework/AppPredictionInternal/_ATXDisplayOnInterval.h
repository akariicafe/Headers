@class NSString, NSDateInterval;

@interface _ATXDisplayOnInterval : NSObject <ATXTimedEventProtocol>

@property (readonly, nonatomic) NSDateInterval *onInterval;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)eventTime;
- (id)prettyRepresentation;
- (void).cxx_destruct;
- (id)init;
- (id)initWithOnInterval:(id)a0;

@end
