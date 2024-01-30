@class NSMutableSet;

@interface CalDAVSupportedCalendarComponentSets : CoreDAVItem {
    NSMutableSet *_componentSets;
}

+ (BOOL)allowedCalendars:(id)a0 contains:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (id)componentsAsString;
- (id)description;
- (id)copyParseRules;
- (id)childrenToWrite;
- (void)addCompSet:(id)a0;

@end
