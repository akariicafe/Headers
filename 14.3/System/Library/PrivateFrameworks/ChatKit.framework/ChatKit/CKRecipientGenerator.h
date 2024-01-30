@class NSArray;

@interface CKRecipientGenerator : NSObject

@property (retain, nonatomic) NSArray *searchABPropertyTypes;

+ (id)sharedRecipientGenerator;

- (void).cxx_destruct;
- (void)getAddressForContact:(id)a0 address:(id *)a1 kind:(unsigned long long *)a2;
- (void)_appendSearchResults:(id)a0 identifiers:(id)a1 abPropertyType:(int)a2 toArray:(id)a3;
- (id)recipientWithAddress:(id)a0;
- (id)recipientWithContact:(id)a0;
- (id)recipientWithContactProperty:(id)a0;

@end
