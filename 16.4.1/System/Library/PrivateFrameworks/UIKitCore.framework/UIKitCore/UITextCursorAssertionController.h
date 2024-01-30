@class NSHashTable;
@protocol UITextCursorAssertionControllerSubject;

@interface UITextCursorAssertionController : NSObject {
    NSHashTable *_assertions;
}

@property (weak, nonatomic) id<UITextCursorAssertionControllerSubject> subject;

- (void)_beginTrackingAssertion:(id)a0;
- (id)debugDescription;
- (void)_updateSubjectWithAssertionState;
- (void)dealloc;
- (id)nonVisibleAssertionWithReason:(id)a0;
- (id)nonBlinkingGhostAssertionWithReason:(id)a0;
- (id)nonBlinkingAssertionWithReason:(id)a0;
- (id)_createAssertionWithReason:(id)a0 options:(unsigned long long)a1;
- (void)_endTrackingAssertion:(id)a0;
- (void).cxx_destruct;

@end
