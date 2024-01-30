@interface CalDAVCalendarInfoSyncTaskGroup : CoreDAVContainerInfoSyncTaskGroup

@property (nonatomic) BOOL fetchSharees;

- (id)copyContainerParserMappings;
- (Class)containerItemClass;

@end
