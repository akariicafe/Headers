@class NSDictionary;

@interface ICRadioContentReference : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long contentType;
@property (readonly, copy, nonatomic) NSDictionary *matchDictionary;
@property (readonly, copy, nonatomic) NSDictionary *rawContentDictionary;

+ (id)storeItemWithIdentifier:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
