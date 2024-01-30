@class CoreDAVItem;

@interface CoreDAVBulkRequestsSupportedItem : CoreDAVItem

@property (retain, nonatomic) CoreDAVItem *supported;

+ (id)copyParseRules;

- (id)init;
- (void).cxx_destruct;
- (id)description;

@end
