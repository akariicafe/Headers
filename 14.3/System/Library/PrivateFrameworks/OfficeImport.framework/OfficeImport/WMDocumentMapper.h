@class WDDocument, NSString;

@interface WMDocumentMapper : CMDocumentMapper <CMMapperRoot> {
    NSString *mFileName;
}

@property (readonly) WDDocument *document;

- (id)archiver;
- (void).cxx_destruct;
- (id)fileName;
- (void)setFileName:(id)a0;
- (id)documentTitle;
- (double)rightMargin;
- (double)topMargin;
- (double)bottomMargin;
- (double)leftMargin;
- (double)headerMargin;
- (id)blipAtIndex:(unsigned int)a0;
- (int)defaultTabWidth;
- (struct CGSize { double x0; double x1; })pageSizeForDevice;
- (struct CGSize { double x0; double x1; })contentSizeForDevice;
- (void)mapDefaultCssStylesAt:(id)a0;
- (BOOL)hasSessionBreakAtIndex:(unsigned long long)a0;
- (id)styleMatrix;
- (void)mapWithState:(id)a0;

@end
