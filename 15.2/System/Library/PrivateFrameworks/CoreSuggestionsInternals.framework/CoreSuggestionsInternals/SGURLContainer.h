@class NSMutableArray;

@interface SGURLContainer : NSObject <SGExternalEnrichment> {
    NSMutableArray *_urls;
    BOOL _needsFlushing;
}

+ (id)urlsFoundBetweenStartDate:(id)a0 endDate:(id)a1 bundleIdentifier:(id)a2 entityStore:(id)a3;
+ (BOOL)deleteAllURLsWithBundleIdentifier:(id)a0 entityStore:(id)a1;
+ (BOOL)deleteAllURLsWithBundleIdentifier:(id)a0 documentIdentifiers:(id)a1 entityStore:(id)a2;

- (void).cxx_destruct;
- (id)init;
- (void)writeWithEntityStore:(id)a0;
- (void)dealloc;
- (void)flushWrites;
- (id)numberOfExtractions;

@end
