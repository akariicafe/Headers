@class CoreDAVLeafItem, CoreDAVItem;

@interface CoreDAVPrincipalSearchPropertyItem : CoreDAVItem

@property (retain, nonatomic) CoreDAVItem *prop;
@property (retain, nonatomic) CoreDAVLeafItem *descriptionItem;

+ (id)copyParseRules;

- (id)description;
- (void).cxx_destruct;
- (id)init;

@end
