@class NSString, _UIAssertionController;

@interface _UIAssertionBase : NSObject <_UIAssertion>

@property (readonly, nonatomic) BOOL initialState;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) NSString *reason;
@property (weak, nonatomic) _UIAssertionController *parentController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
