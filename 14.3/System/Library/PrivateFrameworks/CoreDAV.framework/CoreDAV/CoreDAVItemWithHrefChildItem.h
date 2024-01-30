@class CoreDAVHrefItem;

@interface CoreDAVItemWithHrefChildItem : CoreDAVItem

@property (retain, nonatomic) CoreDAVHrefItem *href;

+ (id)copyParseRules;

- (void).cxx_destruct;
- (void)write:(id)a0;
- (id)description;

@end
