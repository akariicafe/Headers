@class NSString, OIXMLDocument, PDPresentation, NSMutableArray, OIXMLElement;

@interface PMPresentationMapper : CMDocumentMapper <CMMapperRoot> {
    int mWidth;
    NSMutableArray *mSlideNames;
    NSMutableArray *mSlideGuids;
    NSString *mResourceUrlPrefix;
    NSString *mResourceUrlProtocol;
    OIXMLDocument *mXhtmlDoc;
    OIXMLElement *mBodyElement;
    unsigned int mNextCommit;
    unsigned int mCurrentSlide;
    BOOL mHasPushedFirstSlides;
}

@property (readonly) PDPresentation *document;

- (void).cxx_destruct;
- (id)documentTitle;
- (id)blipAtIndex:(unsigned int)a0;
- (struct CGSize { double x0; double x1; })slideSize;
- (struct CGSize { double x0; double x1; })pageSizeForDevice;
- (void)startMappingWithState:(id)a0;
- (void)finishMappingWithState:(id)a0;
- (void)mapElement:(id)a0 atIndex:(unsigned long long)a1 withState:(id)a2 isLastElement:(BOOL)a3;
- (id)initWithDocument:(id)a0 archiver:(id)a1;
- (struct CGSize { double x0; double x1; })pageSizeForDeviceIncludingMargins:(BOOL)a0;
- (void)setHtmlDocumentSizeInArchiver;
- (id)defaultStyleSheet;
- (void)_pushEmptySlideWithMessage:(id)a0;

@end
