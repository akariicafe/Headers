@class NSString, CNContactStore;

@interface CNAssistantCommandClear : NSObject <AFDomainObjectClearing, CNAssistantCommand> {
    CNContactStore *_contactStore;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) CNContactStore *contactStore;

- (void).cxx_destruct;
- (void)clearAceDomainObjects;

@end
