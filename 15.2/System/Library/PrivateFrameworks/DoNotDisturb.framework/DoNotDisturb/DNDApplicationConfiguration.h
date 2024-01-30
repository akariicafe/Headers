@class NSMutableSet;

@interface DNDApplicationConfiguration : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long minimumBreakthroughUrgency;
@property (readonly, copy, nonatomic) NSMutableSet *allowedThreads;
@property (readonly, copy, nonatomic) NSMutableSet *deniedThreads;

+ (id)defaultConfiguration;

- (void)encodeWithCoder:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)diffDescription;
- (id)_initWithMinimumBreakthroughUrgency:(unsigned long long)a0 allowedThreads:(id)a1 deniedThreads:(id)a2;

@end
