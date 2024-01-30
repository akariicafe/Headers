@class NSString, NSData;

@interface WBSHistoryServiceTombstone : WBSHistoryServiceObject

@property (readonly, nonatomic) NSString *url;
@property (readonly, nonatomic) NSData *urlHash;
@property (readonly, nonatomic) NSData *urlSalt;
@property (readonly, nonatomic) double startTime;
@property (readonly, nonatomic) double endTime;
@property (readonly, nonatomic) long long generation;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithTombstone:(id)a0;
- (id)initWithDatabaseID:(long long)a0 url:(id)a1 urlHash:(id)a2 urlSalt:(id)a3 startTime:(double)a4 endTime:(double)a5 generation:(long long)a6;

@end
