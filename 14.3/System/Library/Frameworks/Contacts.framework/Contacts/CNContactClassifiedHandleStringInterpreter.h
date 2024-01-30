@class NSArray, CNHandleStringClassification, NSMutableArray;

@interface CNContactClassifiedHandleStringInterpreter : NSObject

@property (readonly, nonatomic) CNHandleStringClassification *classification;
@property (readonly, nonatomic) NSMutableArray *emailAddressesImpl;
@property (readonly, nonatomic) NSMutableArray *phoneNumbersImpl;
@property (readonly, nonatomic) NSMutableArray *unconvertableHandles;
@property (nonatomic) BOOL hasBeenInterpreted;
@property (readonly) NSArray *emailAddresses;
@property (readonly) NSArray *phoneNumbers;

- (id)init;
- (void).cxx_destruct;
- (void)interpretValues;
- (id)initWithHandleStringClassification:(id)a0;
- (void)interpretEmailAddresses;
- (void)interpretPhoneNumbers;
- (void)interpretUnknownsAsEmailAddresses;
- (id)description;

@end
