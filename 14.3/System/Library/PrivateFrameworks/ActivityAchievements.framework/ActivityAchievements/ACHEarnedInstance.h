@class HKQuantity, NSString, NSDateComponents, NSDate;

@interface ACHEarnedInstance : NSObject <NSCopying, NSSecureCoding> {
    struct { unsigned short year; unsigned char month; unsigned char day; BOOL valid; } _smallEarnedDateComponents;
    unsigned long long _uniqueNameIndex;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long key;
@property (retain, nonatomic) NSString *templateUniqueName;
@property (retain, nonatomic) NSDateComponents *earnedDateComponents;
@property (retain, nonatomic) HKQuantity *value;
@property (retain, nonatomic) NSDate *createdDate;
@property (nonatomic) unsigned char creatorDevice;

+ (id)_allTemplateUniqueNames;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCodable:(id)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)debugDescription;
- (void)encodeWithCoder:(id)a0;

@end
