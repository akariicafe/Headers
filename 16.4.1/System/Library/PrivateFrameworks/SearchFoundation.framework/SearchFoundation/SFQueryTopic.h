@class NSString;

@interface SFQueryTopic : SFTopic <SFQueryTopic>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *query;
@property (nonatomic) int queryType;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithType:(int)a0 query:(id)a1;
- (id)initWithType:(int)a0 query:(id)a1 identifier:(id)a2;

@end
