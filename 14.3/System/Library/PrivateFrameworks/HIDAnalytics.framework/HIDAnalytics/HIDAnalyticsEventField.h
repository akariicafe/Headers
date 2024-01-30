@class NSString;

@interface HIDAnalyticsEventField : NSObject <HIDAnalyticsEventFieldProtocol> {
    unsigned long long integerValue;
}

@property (readonly) NSString *fieldName;
@property (retain) id value;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)setIntegerValue:(unsigned long long)a0;
- (id)initWithName:(id)a0;

@end
