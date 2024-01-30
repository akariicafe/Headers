@class NSMutableSet;

@interface CoreDAVCalendarServerPushTransportsItem : CoreDAVItem

@property (retain, nonatomic) NSMutableSet *transports;

+ (id)copyParseRules;

- (void)addTransport:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)init;

@end
