@protocol BMStoreData;

@interface ATXCandidate : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) id<BMStoreData> biomeStoreData;

- (id)identifier;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)detailedDescription;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)type;
- (unsigned long long)hash;
- (long long)suggestionExecutableType;
- (BOOL)isEqualToATXCandidate:(id)a0;
- (id)initWithBiomeStoreData:(id)a0;

@end
