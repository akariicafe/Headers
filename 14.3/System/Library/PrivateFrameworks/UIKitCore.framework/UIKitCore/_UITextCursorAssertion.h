@class NSString, UITextCursorAssertionController;

@interface _UITextCursorAssertion : NSObject <UITextCursorAssertion>

@property (retain, nonatomic) NSString *reason;
@property (nonatomic) unsigned long long options;
@property (weak, nonatomic) UITextCursorAssertionController *controller;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)dealloc;
- (id)_initWithReason:(id)a0 options:(unsigned long long)a1 controller:(id)a2;
- (void)invalidate;

@end
