@class NSNumber, NSString;

@interface PKStoreId : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ underlyingStoreId;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSNumber *numberValue;
@property (nonatomic, readonly) NSString *stringValue;
@property (nonatomic, readonly) long long longValue;

- (id)initWithInteger:(long long)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithString:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithNumber:(id)a0;

@end
