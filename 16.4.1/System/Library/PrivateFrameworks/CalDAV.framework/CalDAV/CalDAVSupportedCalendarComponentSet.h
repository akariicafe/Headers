@class NSSet, NSMutableSet;

@interface CalDAVSupportedCalendarComponentSet : CoreDAVItem

@property (retain, nonatomic) NSMutableSet *comps;
@property (readonly, nonatomic) NSSet *compNames;

- (id)copyParseRules;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)componentsAsString;
- (id)childrenToWrite;
- (void)addComp:(id)a0;

@end
