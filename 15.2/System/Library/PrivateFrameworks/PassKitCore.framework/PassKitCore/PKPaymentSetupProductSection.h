@class NSString, NSArray;

@interface PKPaymentSetupProductSection : NSObject

@property (copy, nonatomic) NSString *localizedTitle;
@property (retain, nonatomic) NSArray *categories;

- (id)description;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
