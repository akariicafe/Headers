@class NSString, ECEmailAddress;
@protocol ECEmailAddressConvertible;

@interface MEEmailAddress : NSObject <ECEmailAddressConvertible, NSSecureCoding, NSCopying> {
    id<ECEmailAddressConvertible> _convertible;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *rawString;
@property (readonly, copy, nonatomic) NSString *addressString;
@property (readonly, nonatomic) ECEmailAddress *emailAddressValue;
@property (readonly, nonatomic) NSString *stringValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)emailAddressesForAddresses:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithRawString:(id)a0;

@end
