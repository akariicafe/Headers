@class NSArray, NSDate;

@interface WBSRemoteHistorySession : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) NSDate *endDate;
@property (readonly, copy, nonatomic) NSArray *items;
@property (readonly, getter=isCurrentSession) BOOL currentSession;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (id)initWithStartDate:(id)a0 endDate:(id)a1 items:(id)a2;

@end
