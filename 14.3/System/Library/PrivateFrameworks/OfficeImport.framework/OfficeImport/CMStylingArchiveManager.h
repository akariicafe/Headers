@class NSMutableString, NSMutableDictionary;

@interface CMStylingArchiveManager : CMArchiveManager {
    NSMutableString *mCssString;
    NSMutableDictionary *mStyleCache;
}

- (id)init;
- (void).cxx_destruct;
- (id)addCssStyle:(id)a0;
- (void)addCssStyle:(id)a0 withName:(id)a1;
- (id)cssStylesheetString;
- (id)commitStylesheet;

@end
