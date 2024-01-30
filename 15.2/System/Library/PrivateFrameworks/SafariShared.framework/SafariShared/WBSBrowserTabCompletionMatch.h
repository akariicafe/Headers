@class NSUUID, NSString;

@interface WBSBrowserTabCompletionMatch : WBSTabCompletionMatch

@property (readonly, nonatomic) NSUUID *tabUUID;
@property (readonly, nonatomic) NSUUID *tabGroupUUID;
@property (readonly, copy, nonatomic) NSString *tabGroupTitle;
@property (readonly, nonatomic) NSUUID *windowUUID;
@property (readonly, nonatomic) unsigned long long tabIndex;

- (void).cxx_destruct;
- (id)parsecDomainIdentifier;
- (id)initWithTabUUID:(id)a0 windowUUID:(id)a1 tabGroupUUID:(id)a2 tabGroupTitle:(id)a3 tabIndex:(unsigned long long)a4 userTypedString:(id)a5 tabURL:(id)a6 tabTitle:(id)a7 forQueryID:(long long)a8;
- (id)initWithTabUUID:(id)a0 windowUUID:(id)a1 tabIndex:(unsigned long long)a2 userTypedString:(id)a3 tabURL:(id)a4 tabTitle:(id)a5 forQueryID:(long long)a6;

@end
