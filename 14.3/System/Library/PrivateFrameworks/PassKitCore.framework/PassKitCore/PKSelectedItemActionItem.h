@class NSDecimalNumber, NSString, NSDictionary, NSDate;

@interface PKSelectedItemActionItem : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSDecimalNumber *amount;
@property (readonly, copy, nonatomic) NSString *currency;
@property (readonly, copy, nonatomic) NSDate *newExpirationDate;
@property (readonly, copy, nonatomic) NSDictionary *serviceProviderData;
@property (readonly, nonatomic) BOOL serviceProviderDataRequiresLocalBalance;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)_processLocalizableStrings:(id /* block */)a0;
- (id)initWithDictionary:(id)a0;
- (id)serviceProviderDataWithCurrentLocalBalance:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
