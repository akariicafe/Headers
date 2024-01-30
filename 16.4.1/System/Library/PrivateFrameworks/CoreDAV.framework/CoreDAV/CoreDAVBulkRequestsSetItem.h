@class NSDictionary, CoreDAVBulkRequestsItem;

@interface CoreDAVBulkRequestsSetItem : CoreDAVItem

@property (readonly, nonatomic) NSDictionary *dictRepresentation;
@property (retain, nonatomic) CoreDAVBulkRequestsItem *crudItem;
@property (retain, nonatomic) CoreDAVBulkRequestsItem *simpleItem;

+ (id)copyParseRules;

- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
