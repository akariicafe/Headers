@class NSString, NSDate;

@interface PKPhysicalCardOrderActivityEvent : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long activity;
@property (retain, nonatomic) NSDate *date;
@property (readonly, copy, nonatomic) NSString *localizedReason;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;

@end
