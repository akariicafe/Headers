@class NSArray, NSMutableArray, NSString;

@interface CNDFDonationStringCollector : NSObject <CNDonationValueVisitor>

@property (readonly, nonatomic) NSMutableArray *visitedStrings;
@property (readonly, nonatomic) NSArray *strings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)visitDonationValue:(id)a0 emailAddress:(id)a1 label:(id)a2;
- (void)visitDonationValue:(id)a0 imageData:(id)a1;
- (void)visitDonationValue:(id)a0 nameComponents:(id)a1;
- (void)visitDonationValue:(id)a0 phoneNumber:(id)a1 label:(id)a2;
- (void)visitDonationValue:(id)a0 postalAddress:(id)a1 style:(long long)a2 label:(id)a3;
- (void)_addNonEmptyString:(id)a0;
- (void)collectStringsFromDonation:(id)a0;

@end
