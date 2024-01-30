@class NSString, NSData;

@interface DIAttributeImage : DIAttribute <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *encoding;
@property (copy, nonatomic, getter=getCurrentValue) NSData *currentValue;
@property (nonatomic) unsigned long long format;
@property (readonly, nonatomic) unsigned long long height;
@property (readonly, nonatomic) unsigned long long width;

- (id)defaultValue;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
