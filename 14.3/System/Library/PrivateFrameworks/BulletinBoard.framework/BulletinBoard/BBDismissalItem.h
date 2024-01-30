@class NSDate;

@interface BBDismissalItem : NSObject

@property (readonly, nonatomic) unsigned long long feeds;
@property (readonly, nonatomic) NSDate *expiration;

- (void).cxx_destruct;
- (id)description;
- (BOOL)hasExpired;
- (id)initWithFeeds:(unsigned long long)a0;
- (void)addFeeds:(unsigned long long)a0;

@end
