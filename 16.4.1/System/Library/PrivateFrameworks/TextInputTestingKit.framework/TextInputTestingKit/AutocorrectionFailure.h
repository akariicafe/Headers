@class NSCharacterSet;

@interface AutocorrectionFailure : NSObject <AutocorrectionResultClassifier> {
    NSCharacterSet *_letters;
}

- (id)init;
- (void).cxx_destruct;
- (BOOL)doesMatchResult:(id)a0;

@end
