@class PXDataSection, PXNavigationListDataSection, NSMutableDictionary;

@interface PXNavigationListDataSubsection : NSObject {
    NSMutableDictionary *_listItemsCache;
}

@property (readonly, nonatomic) PXDataSection *dataSection;
@property (readonly, nonatomic) PXNavigationListDataSection *listDataSection;
@property (readonly, nonatomic) long long indentationLevel;
@property (readonly, nonatomic) long long indexDelta;
@property (readonly, nonatomic) long long expandedIndex;
@property (readonly, nonatomic) long long externalStartIndex;
@property (readonly, nonatomic) BOOL skipAssetCountFetches;

- (id)description;
- (void).cxx_destruct;
- (id)initWithDataSection:(id)a0 indexDelta:(long long)a1 expandedIndex:(long long)a2 indentationLevel:(long long)a3 externalStartIndex:(long long)a4 skipAssetCountFetches:(BOOL)a5;
- (id)listItemAtExternalIndex:(long long)a0;

@end
