@class NSDictionary;

@interface MediaFoundation.UserEventsMonitor : _TtCs12_SwiftObject <MFResettable, MFStateDumpable> {
    void /* unknown type, empty encoding */ timeout;
    void /* unknown type, empty encoding */ monitors;
    void /* unknown type, empty encoding */ reporter;
}

@property (nonatomic, readonly) NSDictionary *stateDictionary;

- (void)reset;

@end
