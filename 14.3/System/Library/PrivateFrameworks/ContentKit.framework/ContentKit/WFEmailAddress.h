@class NSString;

@interface WFEmailAddress : NSObject <NSCopying, WFNaming, WFSerializableContent, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *address;
@property (readonly, nonatomic) NSString *label;
@property (readonly, nonatomic) NSString *localizedLabel;
@property (readonly, copy, nonatomic) NSString *wfName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)objectWithWFSerializedRepresentation:(id)a0;
+ (id)addressWithEmailAddress:(id)a0;
+ (id)addressWithEmailAddress:(id)a0 label:(id)a1;
+ (id)emailAddressesInString:(id)a0 error:(id *)a1;
+ (BOOL)stringContainsEmailAddresses:(id)a0;
+ (id)addressesWithTextCheckingResult:(id)a0;
+ (id)addressesWithMailtoURL:(id)a0;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (long long)compare:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)wfSerializedRepresentation;
- (id)initWithAddress:(id)a0 label:(id)a1;

@end
