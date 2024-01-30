@interface _TtCV12GameCenterUIP33_71E88C93E9376CB5FC37AECD01F72ACD17NicknameTextField11Coordinator : NSObject <GKNicknameControllerDelegate> {
    void /* unknown type, empty encoding */ parent;
    void /* unknown type, empty encoding */ nicknameController;
    void /* unknown type, empty encoding */ cancellableSubcriber;
}

- (void)keyboardWillHide:(id)a0;
- (void)keyboardWillShow:(id)a0;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)nicknameDidBecomeFirstResponder;
- (void)nicknameDidResignFirstResponder;
- (BOOL)nicknameShouldBeginEditing;
- (void)nicknameTextDidChangeWithMessage:(id)a0;
- (void)nicknameUpdateRequestCompletedWithStatus:(id)a0 error:(id)a1;
- (void)nicknameWillbeginUpdating;

@end
