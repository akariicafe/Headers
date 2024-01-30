@class CNContactStore, NSString;

@interface CNAssistantCommandPunchOut : SADomainObjectPunchOut <CNAssistantCommand> {
    CNContactStore *_contactStore;
}

@property (retain, nonatomic) CNContactStore *contactStore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)validate;
- (void)performWithCompletion:(id /* block */)a0 serviceHelper:(id)a1;
- (id)punchOutWithServiceHelper:(id)a0;
- (id)validateIdentifier;

@end
