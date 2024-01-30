@class CoreDAVItem;

@interface CoreDAVSupportedReportItem : CoreDAVItem

@property (retain, nonatomic) CoreDAVItem *report;

+ (id)copyParseRules;

- (id)description;
- (void).cxx_destruct;
- (id)init;

@end
