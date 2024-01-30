@class NSSet, NSMutableDictionary, NSDate, NSObject;
@protocol NSSecureCoding, NSCopying;

@interface _CDContextValue : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly, retain, nonatomic) NSSet *supportedContextValueClasses;
@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSMutableDictionary *metadata;
@property (retain, nonatomic) NSObject<NSCopying, NSSecureCoding> *value;
@property (retain, nonatomic) NSDate *lastModifiedDate;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;

@end
