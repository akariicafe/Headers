@class NSString;

@interface CNAutocompleteResultFactory : NSObject {
    NSString *_preferredDomain;
    NSString *_sendingAddress;
}

+ (id)factoryWithPriorityDomain:(id)a0 sendingAddress:(id)a1;

- (void).cxx_destruct;
- (id)localContactResultWithDisplayName:(id)a0 value:(id)a1 nameComponents:(id)a2 contactIdentifier:(id)a3;
- (id)MAIDGroupResultWithDisplayName:(id)a0 groupIdentifier:(id)a1 membersProvider:(id /* block */)a2;
- (id)MAIDResultWithDisplayName:(id)a0 value:(id)a1 nameComponents:(id)a2;
- (id)duetGroupResultWithDisplayName:(id)a0 groupIdentifier:(id)a1 membersProvider:(id /* block */)a2;
- (void)applyLastSendingAddressBitToResult:(id)a0;
- (void)applyPreferredDomainBitToResult:(id)a0;
- (void)applySearchContextToResult:(id)a0;
- (id)calendarServerResultWithDisplayName:(id)a0 value:(id)a1 nameComponents:(id)a2 userInfo:(id)a3;
- (id)directoryServerResultWithDisplayName:(id)a0 value:(id)a1 nameComponents:(id)a2;
- (id)duetResultWithDisplayName:(id)a0 value:(id)a1 contactIdentifier:(id)a2;
- (id)extensionGroupResultWithDisplayName:(id)a0 groupIdentifier:(id)a1 membersProvider:(id /* block */)a2;
- (id)extensionResultWithDisplayName:(id)a0 value:(id)a1 nameComponents:(id)a2;
- (id)frequentRecentResultWithDisplayName:(id)a0 value:(id)a1 lastSendingAddress:(id)a2 date:(id)a3 group:(BOOL)a4 completesChosenGroup:(BOOL)a5;
- (id)infrequentRecentResultWithDisplayName:(id)a0 value:(id)a1 lastSendingAddress:(id)a2 dateCount:(unsigned long long)a3 date:(id)a4 group:(BOOL)a5 completesChosenGroup:(BOOL)a6;
- (id)initWithPriorityDomain:(id)a0 sendingAddress:(id)a1;
- (id)localGroupResultWithDisplayName:(id)a0 groupIdentifier:(id)a1;
- (id)localGroupResultWithDisplayName:(id)a0 groupIdentifier:(id)a1 membersProvider:(id /* block */)a2;
- (id)recentResultWithDisplayName:(id)a0 value:(id)a1 lastSendingAddress:(id)a2 dateCount:(unsigned long long)a3 date:(id)a4 group:(BOOL)a5 completesChosenGroup:(BOOL)a6;
- (id)suggestedResultWithDisplayName:(id)a0 value:(id)a1 nameComponents:(id)a2;

@end
