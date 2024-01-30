@class CoreDAVItem;

@interface CoreDAVSupportedReportItem : CoreDAVItem

@property (retain, nonatomic) CoreDAVItem *report;

+ (id)copyParseRules;

- (id)init;
- (void).cxx_destruct;
- (id)description;

@end
