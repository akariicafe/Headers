@class NSArray, NSString;

@interface PKPeerPaymentRequiredFieldsPage : NSObject

@property (retain, nonatomic) NSArray *requiredFields;
@property (copy, nonatomic) NSString *localizedTitle;
@property (copy, nonatomic) NSString *localizedDescription;

- (id)initWithDictionary:(id)a0 fieldOptions:(id)a1;
- (void).cxx_destruct;

@end
