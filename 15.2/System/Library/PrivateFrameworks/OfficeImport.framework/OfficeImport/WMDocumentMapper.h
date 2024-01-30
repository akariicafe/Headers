@class WDDocument, NSString;

@interface WMDocumentMapper : CMDocumentMapper <CMMapperRoot> {
    NSString *mFileName;
}

@property (readonly) WDDocument *document;

- (double)topMargin;
- (double)bottomMargin;
- (id)archiver;
- (void)setFileName:(id)a0;
- (id)fileName;
- (void).cxx_destruct;
- (id)documentTitle;
- (double)rightMargin;
- (double)leftMargin;
- (double)headerMargin;
- (id)styleMatrix;
- (id)blipAtIndex:(unsigned int)a0;
- (void)mapWithState:(id)a0;
- (int)defaultTabWidth;
- (struct CGSize { double x0; double x1; })pageSizeForDevice;
- (struct CGSize { double x0; double x1; })contentSizeForDevice;
- (void)mapDefaultCssStylesAt:(id)a0;
- (BOOL)hasSessionBreakAtIndex:(unsigned long long)a0;

@end
