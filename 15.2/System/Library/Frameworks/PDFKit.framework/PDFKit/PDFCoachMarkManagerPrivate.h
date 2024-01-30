@class PDFTimer, NSMutableDictionary, PDFRenderingProperties;

@interface PDFCoachMarkManagerPrivate : NSObject {
    PDFRenderingProperties *renderingProperties;
    NSMutableDictionary *coachMarks;
    PDFTimer *timer;
}

- (void).cxx_destruct;

@end
