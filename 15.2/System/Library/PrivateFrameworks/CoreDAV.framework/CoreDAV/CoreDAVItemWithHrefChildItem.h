@class CoreDAVHrefItem;

@interface CoreDAVItemWithHrefChildItem : CoreDAVItem

@property (retain, nonatomic) CoreDAVHrefItem *href;

+ (id)copyParseRules;

- (id)description;
- (void).cxx_destruct;
- (void)write:(id)a0;

@end
