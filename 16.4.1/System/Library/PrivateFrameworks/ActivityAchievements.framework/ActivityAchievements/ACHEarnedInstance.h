@class HKQuantity, NSString, NSDateComponents, NSDate;

@interface ACHEarnedInstance : NSObject <NSCopying, NSSecureCoding> {
    unsigned long long _uniqueNameIndex;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) struct { unsigned short year; unsigned char month; unsigned char day; BOOL valid; } packedEarnedDateComponents;
@property (nonatomic) unsigned long long key;
@property (retain, nonatomic) NSString *templateUniqueName;
@property (retain, nonatomic) NSDateComponents *earnedDateComponents;
@property (retain, nonatomic) HKQuantity *value;
@property (retain, nonatomic) NSString *externalIdentifier;
@property (retain, nonatomic) NSDate *createdDate;
@property (nonatomic) unsigned char creatorDevice;

+ (id)_allTemplateUniqueNames;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithCodable:(id)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (long long)compareEarnedDateWithEarnedInstance:(id)a0;

@end
