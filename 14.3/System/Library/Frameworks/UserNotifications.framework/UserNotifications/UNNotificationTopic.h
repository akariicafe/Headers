@class NSString;

@interface UNNotificationTopic : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *displayName;
@property (readonly, nonatomic) unsigned long long priority;
@property (readonly, copy, nonatomic) NSString *sortIdentifier;

+ (id)topicWithIdentifier:(id)a0 displayName:(id)a1 priority:(unsigned long long)a2 sortIdentifier:(id)a3;

- (id)_description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_initWithIdentifier:(id)a0 displayName:(id)a1 priority:(unsigned long long)a2 sortIdentifier:(id)a3;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
