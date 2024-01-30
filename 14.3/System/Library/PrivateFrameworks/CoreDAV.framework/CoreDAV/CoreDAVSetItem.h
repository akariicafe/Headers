@class CoreDAVItem;

@interface CoreDAVSetItem : CoreDAVItem

@property (retain, nonatomic) CoreDAVItem *prop;

+ (id)copyParseRules;

- (id)init;
- (void).cxx_destruct;
- (id)description;

@end
