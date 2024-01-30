@class NSMutableString, NSMutableDictionary;

@interface CMStylingArchiveManager : CMArchiveManager {
    NSMutableString *mCssString;
    NSMutableDictionary *mStyleCache;
}

- (void).cxx_destruct;
- (id)init;
- (id)addCssStyle:(id)a0;
- (void)addCssStyle:(id)a0 withName:(id)a1;
- (id)cssStylesheetString;
- (id)commitStylesheet;

@end
