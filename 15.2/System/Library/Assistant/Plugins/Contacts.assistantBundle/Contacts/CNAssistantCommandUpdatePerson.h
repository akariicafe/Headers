@class CNContactStore, NSString;

@interface CNAssistantCommandUpdatePerson : SADomainObjectUpdate <CNAssistantCommand> {
    CNContactStore *_contactStore;
}

@property (retain, nonatomic) CNContactStore *contactStore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)performWithCompletion:(id /* block */)a0;
- (id)validate;
- (void).cxx_destruct;
- (id)validateIdentifier;
- (id)addToUpdatesCache;

@end
