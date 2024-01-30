@class NSMutableArray;

@interface CNHandleStringsClassificationBuilder : NSObject

@property (retain, nonatomic) NSMutableArray *emailAddresses;
@property (retain, nonatomic) NSMutableArray *phoneNumbers;
@property (retain, nonatomic) NSMutableArray *unknown;

- (id)build;
- (void)addEmailAddress:(id)a0;
- (void)addPhoneNumber:(id)a0;
- (id)init;
- (void)addUnknown:(id)a0;
- (void).cxx_destruct;

@end
