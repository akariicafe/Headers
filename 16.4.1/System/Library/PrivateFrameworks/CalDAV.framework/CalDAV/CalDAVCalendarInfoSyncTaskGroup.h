@interface CalDAVCalendarInfoSyncTaskGroup : CoreDAVContainerInfoSyncTaskGroup

@property (nonatomic) BOOL fetchSharees;

- (Class)containerItemClass;
- (id)copyContainerParserMappings;

@end
