@interface CalendarServerVersion : CalDAVConcreteServerVersion

- (id)init;
- (id)type;
- (BOOL)supportsTimeRangeFilterWithoutEndDate;

@end
