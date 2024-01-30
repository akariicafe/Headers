@class NSHashTable;
@protocol UITextCursorAssertionControllerSubject;

@interface UITextCursorAssertionController : NSObject {
    NSHashTable *_assertions;
}

@property (weak, nonatomic) id<UITextCursorAssertionControllerSubject> subject;

- (void)_updateSubjectWithAssertionState;
- (void)_endTrackingAssertion:(id)a0;
- (void)_beginTrackingAssertion:(id)a0;
- (id)_createAssertionWithReason:(id)a0 options:(unsigned long long)a1;
- (void).cxx_destruct;
- (id)nonBlinkingAssertionWithReason:(id)a0;
- (id)nonVisibleAssertionWithReason:(id)a0;
- (void)dealloc;
- (id)nonBlinkingGhostAssertionWithReason:(id)a0;
- (id)debugDescription;

@end
