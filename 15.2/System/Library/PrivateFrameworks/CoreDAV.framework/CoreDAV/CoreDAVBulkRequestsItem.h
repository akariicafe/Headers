@class NSDictionary, CoreDAVLeafItem, NSMutableSet;

@interface CoreDAVBulkRequestsItem : CoreDAVItem

@property (readonly, nonatomic) NSDictionary *dictRepresentation;
@property (retain, nonatomic) CoreDAVLeafItem *maxResourcesItem;
@property (retain, nonatomic) CoreDAVLeafItem *maxSizeItem;
@property (readonly, nonatomic) NSMutableSet *supportedItems;
@property (readonly, nonatomic) long long maxResources;
@property (readonly, nonatomic) long long maxSize;
@property (readonly, nonatomic) BOOL supportsInsert;
@property (readonly, nonatomic) BOOL supportsUpdate;
@property (readonly, nonatomic) BOOL supportsDelete;

+ (id)copyParseRules;

- (void)addSupportedItem:(id)a0;
- (BOOL)supportsItemWithNameSpace:(id)a0 name:(id)a1;
- (id)description;
- (void).cxx_destruct;
- (id)init;

@end
