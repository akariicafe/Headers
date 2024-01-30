@class CNContactStore, NSString;

@interface CNAssistantCommandSearchPerson : SAABPersonSearch <CNAssistantCommand> {
    CNContactStore *_contactStore;
}

@property (retain, nonatomic) CNContactStore *contactStore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)validate;
- (void)performWithCompletion:(id /* block */)a0;
- (id)perform;
- (void).cxx_destruct;
- (id)meContact:(id *)a0;
- (id)searchByName:(id *)a0;
- (id)searchLocal:(id *)a0;
- (id)searchRemote:(id *)a0;

@end
