@class VSRecognitionAction;

@interface VSRecognitionConfirmAction : VSRecognitionRecognizeAction {
    VSRecognitionAction *_confirmedAction;
    VSRecognitionAction *_deniedAction;
    struct { unsigned char initializing : 1; unsigned char confirmed : 1; } _confirmFlags;
}

- (id)init;
- (void)dealloc;
- (void)_setConfirmed:(BOOL)a0;
- (void)setConfirmedAction:(id)a0;
- (id)confirmedAction;
- (void)setDeniedAction:(id)a0;
- (id)deniedAction;
- (int)completionType;
- (id)initWithModelIdentifier:(id)a0;

@end
