@class NSString;

@interface RWIProtocolPageCookie : RWIProtocolJSONObject

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *value;
@property (copy, nonatomic) NSString *domain;
@property (copy, nonatomic) NSString *path;
@property (nonatomic) double expires;
@property (nonatomic) BOOL session;
@property (nonatomic) BOOL httpOnly;
@property (nonatomic) BOOL secure;
@property (nonatomic) long long sameSite;

- (id)initWithName:(id)a0 value:(id)a1 domain:(id)a2 path:(id)a3 expires:(double)a4 session:(BOOL)a5 httpOnly:(BOOL)a6 secure:(BOOL)a7 sameSite:(long long)a8;

@end
