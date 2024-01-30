@class NSMutableDictionary, CNContactBufferDecoder, NSMutableArray, CNContactFetchRequest;

@interface CNiOSABContactBuffersDecoder : NSObject

@property (readonly, nonatomic) CNContactBufferDecoder *decoder;
@property (readonly, nonatomic) NSMutableArray *contactsWaitingForUnification;
@property (readonly, nonatomic) NSMutableDictionary *matchInfosWaitingForUnification;
@property (readonly, nonatomic) CNContactFetchRequest *fetchRequest;

- (id)initWithFetchRequest:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)_addContactMatchInfoFromABMatchInfos:(id)a0 forContact:(id)a1 toDictionary:(id)a2;
- (id)contactMatchInfosFromABMatchInfos:(id)a0 contacts:(id)a1;
- (id)unifyContacts:(id)a0 moreComing:(BOOL)a1;
- (id)_contactMatchInfosFromABMatchInfos:(id)a0 contacts:(id)a1;
- (id)contactsFromData:(id)a0 moreComing:(BOOL)a1 error:(id *)a2;

@end
