@interface CalendarServerVersion : CalDAVConcreteServerVersion

- (BOOL)supportsTimeRangeFilterWithoutEndDate;
- (id)init;
- (id)type;

@end
