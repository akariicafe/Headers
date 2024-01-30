@interface SPOfflineAdvertisingConfiguration : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long shortIntervalCount;
@property (nonatomic) long long longIntervalCount;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)a0;
- (id)description;
- (id)initWithShortIntervalCount:(long long)a0 longIntervalCount:(long long)a1;

@end
