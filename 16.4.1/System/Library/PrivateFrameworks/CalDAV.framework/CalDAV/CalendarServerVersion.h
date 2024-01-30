@interface CalendarServerVersion : CalDAVConcreteServerVersion

- (id)type;
- (BOOL)supportsTimeRangeFilterWithoutEndDate;
- (id)init;

@end
