@class NSString;

@interface ARPHomeControlSuggestion : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) double computedScore;
@property (nonatomic) long long type;
@property (nonatomic) double score;
@property (copy, nonatomic) NSString *homeUUID;
@property (copy, nonatomic) NSString *targetUUID;
@property (copy, nonatomic) NSString *accessoryServiceUUID;
@property (copy, nonatomic) NSString *suggestionReason;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithHomeUUID:(id)a0 targetUUID:(id)a1 accessoryServiceUUID:(id)a2 type:(long long)a3 score:(double)a4 computedScore:(double)a5 suggestionReason:(id)a6;
- (id)initWithHomeUUID:(id)a0 targetUUID:(id)a1 accessoryServiceUUID:(id)a2 type:(long long)a3 score:(double)a4 suggestionReason:(id)a5;

@end
