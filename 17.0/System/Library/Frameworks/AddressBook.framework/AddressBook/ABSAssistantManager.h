@class ABSAddressBook;

@interface ABSAssistantManager : NSObject

@property (readonly, nonatomic) ABSAddressBook *addressBook;

- (id)init;
- (id)initWithAddressBook:(id)a0;
- (void).cxx_destruct;
- (id)newSAPersonFromABPerson:(void *)a0;

@end
