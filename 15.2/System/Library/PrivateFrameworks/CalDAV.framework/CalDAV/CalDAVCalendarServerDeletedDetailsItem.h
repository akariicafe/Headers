@class NSString, ICSDateValue;

@interface CalDAVCalendarServerDeletedDetailsItem : CoreDAVItem

@property (retain, nonatomic) NSString *componentType;
@property (retain, nonatomic) NSString *summary;
@property (retain, nonatomic) NSString *displayName;
@property (retain, nonatomic) ICSDateValue *nextInstance;
@property (nonatomic) BOOL hadMoreInstances;

- (void).cxx_destruct;
- (id)init;
- (id)copyParseRules;
- (void)setDisplayNameItem:(id)a0;
- (void)setComponentTypeItem:(id)a0;
- (void)setSummaryItem:(id)a0;
- (void)setNextInstanceItem:(id)a0;
- (void)setHadMoreInstancesItem:(id)a0;

@end
