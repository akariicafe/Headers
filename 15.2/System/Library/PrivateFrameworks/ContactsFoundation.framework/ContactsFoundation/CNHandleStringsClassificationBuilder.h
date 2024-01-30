@class NSMutableArray;

@interface CNHandleStringsClassificationBuilder : NSObject

@property (retain, nonatomic) NSMutableArray *emailAddresses;
@property (retain, nonatomic) NSMutableArray *phoneNumbers;
@property (retain, nonatomic) NSMutableArray *unknown;

- (void)addEmailAddress:(id)a0;
- (id)build;
- (void).cxx_destruct;
- (id)init;
- (void)addUnknown:(id)a0;
- (void)addPhoneNumber:(id)a0;

@end
