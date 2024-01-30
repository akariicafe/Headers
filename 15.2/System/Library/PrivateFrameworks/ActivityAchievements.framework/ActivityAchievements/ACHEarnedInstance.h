@class HKQuantity, NSString, NSDateComponents, NSDate;

@interface ACHEarnedInstance : NSObject <NSCopying, NSSecureCoding> {
    struct { unsigned short year; unsigned char month; unsigned char day; BOOL valid; } _packedEarnedDateComponents;
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

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCodable:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)debugDescription;
- (long long)compareEarnedDateWithEarnedInstance:(id)a0;

@end
