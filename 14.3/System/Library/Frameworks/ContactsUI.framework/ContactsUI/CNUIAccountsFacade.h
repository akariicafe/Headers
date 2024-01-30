@class CNUIAccountsFacadeRequestRunner, ACAccountStore;

@interface CNUIAccountsFacade : NSObject

@property (readonly, nonatomic) ACAccountStore *accountStore;
@property (readonly, nonatomic) CNUIAccountsFacadeRequestRunner *requestRunner;

- (id)init;
- (void).cxx_destruct;
- (id)initWithAccountStore:(id)a0 requestRunner:(id)a1;
- (void)fetchiCloudFamilyMembersWithCompletionHandler:(id /* block */)a0;

@end
