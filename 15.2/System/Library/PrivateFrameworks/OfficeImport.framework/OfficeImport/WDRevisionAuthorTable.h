@class WDDocument, NSMutableArray;

@interface WDRevisionAuthorTable : NSObject {
    NSMutableArray *mAuthors;
    WDDocument *mDocument;
}

- (id)authors;
- (id)description;
- (void).cxx_destruct;
- (id)initWithDocument:(id)a0;
- (unsigned long long)authorCount;
- (id)authorAt:(unsigned long long)a0;
- (unsigned long long)authorAddLookup:(id)a0;
- (void)addAuthor:(id)a0;

@end
