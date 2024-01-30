@class SFQueryTopic, NSString;

@interface PARQueryTopicContext : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) SFQueryTopic *topic;
@property (retain, nonatomic) NSString *contextId;
@property (readonly, nonatomic) long long index;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (long long)index;
- (void).cxx_destruct;
- (id)initWithTopic:(id)a0 index:(long long)a1;

@end
