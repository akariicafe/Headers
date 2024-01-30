@class NSString;

@interface WDBookmark : WDRun {
    NSString *mName;
    int mBookmarkType;
}

- (void)setName:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)name;
- (int)runType;
- (int)bookmarkType;
- (void)setBookmarkType:(int)a0;
- (id)initWithParagraph:(id)a0 name:(id)a1 type:(int)a2;

@end
