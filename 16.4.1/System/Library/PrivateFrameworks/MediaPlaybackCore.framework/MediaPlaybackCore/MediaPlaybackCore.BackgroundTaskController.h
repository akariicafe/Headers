@class NSDictionary;

@interface MediaPlaybackCore.BackgroundTaskController : _TtCs12_SwiftObject <MFResettable, MFStateDumpable> {
    void /* unknown type, empty encoding */ provider;
    void /* unknown type, empty encoding */ reporter;
    void /* unknown type, empty encoding */ tasks;
}

@property (nonatomic, readonly) NSDictionary *stateDictionary;

- (void)resetWithReason:(id)a0;

@end
