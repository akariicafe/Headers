@class NSArray, CNHandleStringClassification, NSMutableArray;

@interface CNContactClassifiedHandleStringInterpreter : NSObject

@property (readonly, nonatomic) CNHandleStringClassification *classification;
@property (readonly, nonatomic) NSMutableArray *emailAddressesImpl;
@property (readonly, nonatomic) NSMutableArray *phoneNumbersImpl;
@property (readonly, nonatomic) NSMutableArray *unconvertableHandles;
@property (nonatomic) BOOL hasBeenInterpreted;
@property (readonly) NSArray *emailAddresses;
@property (readonly) NSArray *phoneNumbers;

- (id)description;
- (void).cxx_destruct;
- (id)init;
- (void)interpretValues;
- (id)initWithHandleStringClassification:(id)a0;
- (void)interpretEmailAddresses;
- (void)interpretPhoneNumbers;
- (void)interpretUnknownsAsEmailAddresses;

@end
