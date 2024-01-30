@class ABSAddressBook;

@interface ABSAssistantManager : NSObject

@property (readonly, nonatomic) ABSAddressBook *addressBook;

- (id)init;
- (void).cxx_destruct;
- (id)initWithAddressBook:(id)a0;
- (id)newSAPersonFromABPerson:(void *)a0;

@end
