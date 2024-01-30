@class NSMutableArray;

@interface SGURLContainer : NSObject <SGExternalEnrichment> {
    NSMutableArray *_urls;
}

+ (BOOL)deleteAllURLsWithBundleIdentifier:(id)a0 entityStore:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (void)flushWrites;
- (void)writeWithEntityStore:(id)a0;

@end
