@class NSArray, NSDictionary;

@interface SPOfflineAdvertisingKeys : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long rotationInterval;
@property (readonly, copy, nonatomic) NSArray *keys;
@property (readonly, copy) NSDictionary *dictionaryRepresentation;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithInterval:(long long)a0 keys:(id)a1;

@end
