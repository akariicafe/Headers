@class NSString, NSOrderedSet, NSDate;

@interface HistoryTableViewDataSourceSession : NSObject {
    NSString *_sessionIdentifier;
}

@property (readonly, nonatomic) NSDate *sessionDate;
@property (readonly, nonatomic) NSString *sessionIdentifier;
@property (copy, nonatomic) NSOrderedSet *historyItems;

+ (id)sessionWithDate:(id)a0;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithDate:(id)a0;

@end
