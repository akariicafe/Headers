@class NSNumber, NSString;

@interface PKStoreId : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ underlyingStoreId;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSNumber *numberValue;
@property (nonatomic, readonly) NSString *stringValue;
@property (nonatomic, readonly) long long longValue;

- (id)initWithString:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithNumber:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)initWithInteger:(long long)a0;

@end
