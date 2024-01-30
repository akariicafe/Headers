@class CoreDAVItem;

@interface CoreDAVSetItem : CoreDAVItem

@property (retain, nonatomic) CoreDAVItem *prop;

+ (id)copyParseRules;

- (id)description;
- (void).cxx_destruct;
- (id)init;

@end
