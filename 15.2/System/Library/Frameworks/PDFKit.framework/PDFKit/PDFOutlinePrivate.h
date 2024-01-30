@class NSString, PDFAction, PDFOutline, PDFDocument, NSMutableArray;

@interface PDFOutlinePrivate : NSObject {
    PDFDocument *document;
    NSString *title;
    PDFAction *action;
    PDFOutline *parent;
    NSMutableArray *children;
    BOOL childrenLoaded;
    struct __CFDictionary { } *dictionary;
    BOOL open;
    struct CGPDFDictionary { } *srcDictionary;
}

- (void).cxx_destruct;

@end
