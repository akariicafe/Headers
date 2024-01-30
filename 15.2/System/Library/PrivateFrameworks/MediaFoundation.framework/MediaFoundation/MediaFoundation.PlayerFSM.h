@class NSDictionary;

@interface MediaFoundation.PlayerFSM : _TtCs12_SwiftObject <MFStateDumpable, MFResettable> {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ states;
    void /* unknown type, empty encoding */ controller;
}

@property (nonatomic, readonly) NSDictionary *stateDictionary;

- (void)reset;

@end
