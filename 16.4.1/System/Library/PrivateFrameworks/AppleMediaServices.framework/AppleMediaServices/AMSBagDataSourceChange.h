@class NSString, NSDictionary, NSDate;

@interface AMSBagDataSourceChange : NSObject

@property (readonly, nonatomic) NSString *accountIdentifier;
@property (readonly, nonatomic) NSString *loadedBagIdentifier;
@property (readonly, nonatomic) NSString *loadedBagPartialIdentifier;
@property (readonly, nonatomic) NSDictionary *originalData;
@property (readonly, nonatomic) NSDate *originalExpirationDate;
@property (readonly, nonatomic) NSString *profile;
@property (readonly, nonatomic) NSString *profileVersion;
@property (readonly, nonatomic) NSDictionary *updatedData;

- (void).cxx_destruct;
- (id)initWithProfile:(id)a0 profileVersion:(id)a1 originalData:(id)a2 originalExpirationDate:(id)a3 updatedData:(id)a4 loadedBagIdentifier:(id)a5 loadedBagPartialIdentifier:(id)a6 accountIdentifier:(id)a7;

@end
