@class NSString, NSArray, NSDate;

@interface HDHRSSignedClinicalDataProcessingContextCollection : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSDate *receivedDate;
@property (readonly, copy, nonatomic) NSString *countryCode;
@property (readonly, nonatomic) unsigned long long options;
@property (readonly, copy, nonatomic) NSArray *contextItems;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (void).cxx_destruct;
- (id)initWithReceivedDate:(id)a0 countryCode:(id)a1 options:(unsigned long long)a2 contextItems:(id)a3;

@end
