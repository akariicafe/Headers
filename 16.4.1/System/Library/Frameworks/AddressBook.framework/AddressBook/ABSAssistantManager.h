@class ABSAddressBook;

@interface ABSAssistantManager : NSObject

@property (readonly, nonatomic) ABSAddressBook *addressBook;

- (id)initWithAddressBook:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)newSAPersonFromABPerson:(void *)a0;

@end
