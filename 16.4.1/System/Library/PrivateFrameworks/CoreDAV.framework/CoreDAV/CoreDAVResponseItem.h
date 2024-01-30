@class CoreDAVItemWithHrefChildItem, CoreDAVMatchResultsItem, NSMutableSet, CoreDAVErrorItem, NSMutableArray, CoreDAVLeafItem;

@interface CoreDAVResponseItem : CoreDAVItem

@property (retain, nonatomic) NSMutableArray *hrefs;
@property (retain, nonatomic) CoreDAVLeafItem *status;
@property (retain, nonatomic) NSMutableSet *propStats;
@property (retain, nonatomic) CoreDAVErrorItem *errorItem;
@property (retain, nonatomic) CoreDAVLeafItem *responseDescription;
@property (retain, nonatomic) CoreDAVItemWithHrefChildItem *location;
@property (retain, nonatomic) CoreDAVLeafItem *serverUID;
@property (retain, nonatomic) CoreDAVMatchResultsItem *matchResults;

+ (id)copyParseRules;

- (BOOL)hasPropertyError;
- (void)addHref:(id)a0;
- (id)firstHref;
- (id)init;
- (id)successfulPropertiesToValues;
- (id)description;
- (void)addPropStat:(id)a0;
- (void).cxx_destruct;

@end
