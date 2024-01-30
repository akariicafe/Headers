@class NSString;

@interface HDHRSExtractionFailureRecord : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long failureCode;
@property (readonly, copy, nonatomic) NSString *propertyName;
@property (readonly, copy, nonatomic) NSString *resourceKeyPath;
@property (readonly, copy, nonatomic) NSString *internalDisplaySafeDescription;

+ (id)extractionFailureRecordWithCode:(long long)a0 propertyName:(id)a1 resourceKeyPath:(id)a2;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
