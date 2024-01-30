@class CHRecognizer, NSLocale;

@interface RecognizerProvider : NSObject

@property (readonly) NSLocale *recognitionLanguage;
@property (readonly) CHRecognizer *recognizer;
@property (copy) id /* block */ recognizerDidLoadBlock;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithRecognitionLanguage:(id)a0;
- (void)provideRecognizerToBlock:(id /* block */)a0;
- (void)unloadRecognizer;

@end
