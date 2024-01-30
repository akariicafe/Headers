@class NSURL, PDFDestination;

@interface PDFActionRemoteGoToPrivateVars : NSObject {
    unsigned long long pageIndex;
    struct CGPoint { double x; double y; } point;
    NSURL *url;
    PDFDestination *destination;
}

- (void).cxx_destruct;

@end
