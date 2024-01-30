@class NSString;

@interface PDAssertion : NSObject

@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *reason;
@property (nonatomic) BOOL invalidateWhenBackgrounded;
@property (readonly, nonatomic) double createdAt;

- (id)description;
- (void).cxx_destruct;
- (id)initWithType:(unsigned long long)a0 identifier:(id)a1 reason:(id)a2;

@end
