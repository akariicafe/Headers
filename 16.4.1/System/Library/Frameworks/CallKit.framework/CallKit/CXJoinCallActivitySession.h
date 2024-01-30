@class NSUUID, CXJoinCallActivity, NSDate;

@interface CXJoinCallActivitySession : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSDate *timestamp;
@property (retain, nonatomic) NSUUID *UUID;
@property (retain, nonatomic) CXJoinCallActivity *activity;
@property (nonatomic) unsigned long long state;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)initWithActivity:(id)a0;
- (BOOL)isEqualToJoinCallActivitySession:(id)a0;

@end
