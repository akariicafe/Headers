@class CoreDAVLeafItem;

@interface CoreDAVMatchResultsItem : CoreDAVItem

@property (retain, nonatomic) CoreDAVLeafItem *rank;
@property (retain, nonatomic) CoreDAVLeafItem *language;
@property (retain, nonatomic) CoreDAVLeafItem *region;
@property (retain, nonatomic) CoreDAVLeafItem *calendarDescription;

+ (id)copyParseRules;

- (id)description;
- (void).cxx_destruct;

@end
