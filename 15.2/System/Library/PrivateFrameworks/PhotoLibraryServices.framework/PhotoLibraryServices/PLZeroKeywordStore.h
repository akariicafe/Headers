@class NSString;

@interface PLZeroKeywordStore : NSObject {
    NSString *_storePath;
}

+ (id)expectedClasses;

- (id)initWithPath:(id)a0;
- (void)deleteStore;
- (void)updateZeroKeywordsTo:(id)a0;
- (void).cxx_destruct;
- (id)currentZeroKeywords;

@end
