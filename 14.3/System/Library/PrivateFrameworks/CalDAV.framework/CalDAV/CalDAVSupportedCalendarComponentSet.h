@class NSSet, NSMutableSet;

@interface CalDAVSupportedCalendarComponentSet : CoreDAVItem

@property (retain, nonatomic) NSMutableSet *comps;
@property (readonly, nonatomic) NSSet *compNames;

- (id)init;
- (void).cxx_destruct;
- (id)componentsAsString;
- (id)description;
- (id)copyParseRules;
- (id)childrenToWrite;
- (void)addComp:(id)a0;

@end
