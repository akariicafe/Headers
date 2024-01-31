@class NSMutableDictionary, CNContactBufferDecoder, NSMutableArray;

@interface CNiOSABContactBuffersDecoder : NSObject

@property (readonly, nonatomic) CNContactBufferDecoder *decoder;
@property (readonly, nonatomic) unsigned long long decodeBatchSize;
@property (readonly, nonatomic) BOOL unifyResults;
@property (readonly, nonatomic) BOOL mutableResults;
@property (readonly, nonatomic) NSMutableArray *contactsWaitingForUnification;
@property (readonly, nonatomic) NSMutableDictionary *matchInfosWaitingForUnification;

- (id)init;
- (id)initWithDecoder:(id)a0 unifyResults:(BOOL)a1 mutableResults:(BOOL)a2 decodeBatchLimit:(unsigned long long)a3;
- (BOOL)decodeContactsFromData:(id)a0 moreComing:(BOOL)a1 replyHandler:(id /* block */)a2 error:(id *)a3;
- (id)_contactMatchInfosFromABMatchInfos:(id)a0 contacts:(id)a1;
- (id)initWithFetchRequest:(id)a0;
- (void)_addContactMatchInfoFromABMatchInfos:(id)a0 forContact:(id)a1 toDictionary:(id)a2;
- (void).cxx_destruct;
- (id)unifyContacts:(id)a0 moreComing:(BOOL)a1;
- (id)contactMatchInfosFromABMatchInfos:(id)a0 contacts:(id)a1;

@end
