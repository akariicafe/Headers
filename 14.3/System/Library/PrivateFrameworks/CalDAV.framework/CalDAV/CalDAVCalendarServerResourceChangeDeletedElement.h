@class NSString, ICSDateValue;

@interface CalDAVCalendarServerResourceChangeDeletedElement : CalDAVCalendarServerResourceChangeElement

@property (retain, nonatomic) NSString *componentType;
@property (retain, nonatomic) NSString *summary;
@property (retain, nonatomic) NSString *displayName;
@property (retain, nonatomic) ICSDateValue *nextInstance;
@property (nonatomic) BOOL hadMoreInstances;

- (id)init;
- (void).cxx_destruct;
- (id)copyParseRules;
- (void)setDeletedDetails:(id)a0;

@end
