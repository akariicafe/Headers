@class CoreDAVItem;

@interface CoreDAVBulkRequestsSupportedItem : CoreDAVItem

@property (retain, nonatomic) CoreDAVItem *supported;

+ (id)copyParseRules;

- (id)description;
- (void).cxx_destruct;
- (id)init;

@end
