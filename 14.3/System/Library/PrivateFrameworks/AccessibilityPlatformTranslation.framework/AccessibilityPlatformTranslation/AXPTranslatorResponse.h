@class AXPTranslationObject, NSArray;
@protocol NSObject, NSSecureCoding, NSCopying;

@interface AXPTranslatorResponse : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) id<NSObject, NSCopying, NSSecureCoding> resultData;
@property (nonatomic) unsigned long long attribute;
@property (nonatomic) unsigned long long notification;
@property (retain, nonatomic) AXPTranslationObject *associatedNotificationObject;
@property (nonatomic) unsigned long long error;
@property (readonly, nonatomic) AXPTranslationObject *translationResponse;
@property (readonly, nonatomic) BOOL boolResponse;
@property (readonly, nonatomic) NSArray *translationsResponse;

+ (id)emptyResponse;
+ (id)allowedDecodableClasses;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;

@end
