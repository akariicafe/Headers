@class CoreDAVItemWithNoChildren, CoreDAVItem;

@interface CoreDAVPropFindItem : CoreDAVItem

@property (retain, nonatomic) CoreDAVItemWithNoChildren *propName;
@property (retain, nonatomic) CoreDAVItemWithNoChildren *allProp;
@property (retain, nonatomic) CoreDAVItem *include;
@property (retain, nonatomic) CoreDAVItem *prop;

+ (id)copyParseRules;

- (id)init;
- (void).cxx_destruct;
- (id)description;

@end
