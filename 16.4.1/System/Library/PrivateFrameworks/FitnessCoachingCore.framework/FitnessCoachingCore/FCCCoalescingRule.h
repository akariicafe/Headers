@class NSString;

@interface FCCCoalescingRule : NSObject <FCCDataSerializable>

@property (copy, nonatomic) NSString *eventIdentifier;
@property (nonatomic) double interval;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)protobuf;
- (id)initWithEventIdentifier:(id)a0 interval:(double)a1;
- (id)transportData;
- (id)initWithProtobuf:(id)a0;
- (id)initWithTransportData:(id)a0;
- (void).cxx_destruct;

@end
