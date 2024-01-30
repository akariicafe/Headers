@class NLTokenizer;

@interface HKMedicationsTokenizer : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (retain, nonatomic) NLTokenizer *tokenizer;

- (id)init;
- (void).cxx_destruct;
- (id)wordsFromTranscript:(id)a0;

@end
