@class NSDictionary;

@interface MediaFoundation.BackgroundTaskController : _TtCs12_SwiftObject <MFResettable, MFStateDumpable> {
    void /* unknown type, empty encoding */ provider;
    void /* unknown type, empty encoding */ reporter;
    void /* unknown type, empty encoding */ tasks;
}

@property (nonatomic, readonly) NSDictionary *stateDictionary;

- (void)reset;

@end
