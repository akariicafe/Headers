@class NSString, SPUnknownProductMetadata;

@interface SPUnknownProductInfo : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *modelName;
@property (copy, nonatomic) NSString *manufacturerName;
@property (copy, nonatomic) SPUnknownProductMetadata *learnModeMetadata;
@property (copy, nonatomic) SPUnknownProductMetadata *disableMetadata;
@property (nonatomic) unsigned long long capabilities;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;

@end
