@class NSString;

@interface PLZeroKeywordStore : NSObject {
    NSString *_storePath;
}

+ (id)expectedClasses;

- (id)initWithPath:(id)a0;
- (void).cxx_destruct;
- (void)updateZeroKeywordsTo:(id)a0;
- (id)currentZeroKeywords;
- (void)deleteStore;

@end
