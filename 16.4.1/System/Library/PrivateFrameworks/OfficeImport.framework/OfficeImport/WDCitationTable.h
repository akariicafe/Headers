@class WDDocument, NSMutableDictionary;

@interface WDCitationTable : NSObject {
    NSMutableDictionary *mCitations;
}

@property (readonly, weak) WDDocument *document;

- (unsigned long long)count;
- (id)initWithDocument:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (void)addCitation:(id)a0 forID:(id)a1;
- (id)citationFor:(id)a0;
- (id)citationIDs;

@end
