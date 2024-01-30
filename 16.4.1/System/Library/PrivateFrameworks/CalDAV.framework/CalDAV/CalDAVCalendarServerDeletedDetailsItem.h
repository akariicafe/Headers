@class NSString, ICSDateValue;

@interface CalDAVCalendarServerDeletedDetailsItem : CoreDAVItem

@property (retain, nonatomic) NSString *componentType;
@property (retain, nonatomic) NSString *summary;
@property (retain, nonatomic) NSString *displayName;
@property (retain, nonatomic) ICSDateValue *nextInstance;
@property (nonatomic) BOOL hadMoreInstances;

- (id)copyParseRules;
- (id)init;
- (void).cxx_destruct;
- (void)setSummaryItem:(id)a0;
- (void)setComponentTypeItem:(id)a0;
- (void)setDisplayNameItem:(id)a0;
- (void)setHadMoreInstancesItem:(id)a0;
- (void)setNextInstanceItem:(id)a0;

@end
