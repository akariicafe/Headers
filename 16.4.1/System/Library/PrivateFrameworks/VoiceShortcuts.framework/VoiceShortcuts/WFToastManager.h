@class WFSessionKitAssertion;

@interface WFToastManager : NSObject {
    void /* unknown type, empty encoding */ _toastedSession;
    void /* unknown type, empty encoding */ transaction;
    void /* unknown type, empty encoding */ lock;
}

@property (nonatomic, weak) void /* unknown type, empty encoding */ delegate;
@property (nonatomic, readonly) WFSessionKitAssertion *toastedSession;

- (id)initWithDelegate:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (BOOL)toastWithSessionWithIdentifier:(id)a0;
- (void)eatTheToast;

@end
