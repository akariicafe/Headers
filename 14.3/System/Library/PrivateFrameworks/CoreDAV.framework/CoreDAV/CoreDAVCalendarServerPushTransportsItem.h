@class NSMutableSet;

@interface CoreDAVCalendarServerPushTransportsItem : CoreDAVItem

@property (retain, nonatomic) NSMutableSet *transports;

+ (id)copyParseRules;

- (id)init;
- (void).cxx_destruct;
- (id)description;
- (void)addTransport:(id)a0;

@end
