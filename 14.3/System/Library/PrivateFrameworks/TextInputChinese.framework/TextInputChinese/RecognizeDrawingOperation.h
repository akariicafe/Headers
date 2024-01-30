@class CHRecognizer, NSArray, TIInputManagerHandwriting, NSString, TIHandwritingStrokes, NSLocale;

@interface RecognizeDrawingOperation : NSOperation {
    TIHandwritingStrokes *_strokes;
    NSLocale *_recognitionLanguage;
}

@property (retain, nonatomic) NSArray *candidates;
@property (retain, nonatomic) TIInputManagerHandwriting *manager;
@property (retain, nonatomic) NSString *history;
@property (retain, nonatomic) CHRecognizer *recognizer;

+ (id)recognitionResultsForStrokes:(id)a0 withRecognizer:(id)a1 history:(id)a2 shouldCancel:(id /* block */)a3;

- (void).cxx_destruct;
- (void)dealloc;
- (void)main;
- (id)initWithInputManager:(id)a0 strokes:(id)a1 history:(id)a2;

@end
