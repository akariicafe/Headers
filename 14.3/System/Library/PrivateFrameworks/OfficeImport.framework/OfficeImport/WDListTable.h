@class WDDocument, NSMutableDictionary, WDList, NSMutableArray;

@interface WDListTable : NSObject {
    WDDocument *mDocument;
    NSMutableArray *mLists;
    NSMutableDictionary *mListMapById;
    WDList *mNullList;
    WDList *mDefaultList;
}

- (void).cxx_destruct;
- (unsigned long long)listCount;
- (id)initWithDocument:(id)a0;
- (id)lists;
- (id)description;
- (id)listAt:(unsigned long long)a0;
- (id)listWithListId:(int)a0;
- (id)addListWithListId:(int)a0 listDefinitionId:(int)a1;

@end
