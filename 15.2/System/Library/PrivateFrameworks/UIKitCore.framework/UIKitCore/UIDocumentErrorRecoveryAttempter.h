@class UIDocument;

@interface UIDocumentErrorRecoveryAttempter : NSObject {
    UIDocument *_document;
    id _wrappedRecoveryAttempter;
    id /* block */ _continuerOrNil;
    long long _silentRecoveryOptionIndex;
    id /* block */ _appModalRecoveryAttempter;
    id /* block */ _recoveryCancelerOrNil;
    struct { unsigned char attemptedRecovery : 1; } _errorRecoveryAttempterFlags;
}

- (id)initWithDocument:(id)a0 silentRecoveryOptionIndex:(unsigned long long)a1 appModalRecoveryAttempter:(id /* block */)a2 recoveryCanceler:(id /* block */)a3;
- (void).cxx_destruct;
- (BOOL)attemptSilentRecoveryFromError:(id)a0 error:(id *)a1;
- (id)initWithDocument:(id)a0 wrappedRecoveryAttempter:(id)a1;
- (BOOL)attemptRecoveryFromError:(id)a0 optionIndex:(unsigned long long)a1;
- (void)dealloc;
- (void)cancelRecovery;

@end
