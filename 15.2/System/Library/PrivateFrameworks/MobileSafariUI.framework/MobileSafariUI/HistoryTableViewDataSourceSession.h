@class NSString, NSOrderedSet, NSDate;

@interface HistoryTableViewDataSourceSession : NSObject {
    NSString *_sessionIdentifier;
}

@property (readonly, nonatomic) NSDate *sessionDate;
@property (readonly, nonatomic) NSString *sessionIdentifier;
@property (copy, nonatomic) NSOrderedSet *historyItems;

+ (void)initialize;
+ (id)sessionWithDate:(id)a0;
+ (id)sessionIdentifierFromDate:(id)a0;
+ (id)_sessionDateFromDate:(id)a0;
+ (id)_sessionIdentifierFromDate:(id)a0;

- (id)initWithDate:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
