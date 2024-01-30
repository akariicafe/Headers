@class NSString, NSSet, FMFHandle, NSDate;

@interface FMFFriendshipRequest : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *requestId;
@property (nonatomic) long long requestType;
@property (retain, nonatomic) FMFHandle *fromHandle;
@property (retain, nonatomic) NSSet *toHandles;
@property (retain, nonatomic) NSDate *endDate;
@property (retain, nonatomic) NSString *groupId;

+ (id)friendshipRequestToHandles:(id)a0 fromHandle:(id)a1 withType:(long long)a2 groupId:(id)a3 withEndDate:(id)a4;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithFromHandle:(id)a0 toHandle:(id)a1 ofType:(long long)a2 groupId:(id)a3 endDate:(id)a4 requestId:(id)a5;

@end
