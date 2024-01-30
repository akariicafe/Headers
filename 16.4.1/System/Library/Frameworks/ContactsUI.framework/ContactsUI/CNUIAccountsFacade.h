@class CNUIAccountsFacadeRequestRunner, ACAccountStore;

@interface CNUIAccountsFacade : NSObject

@property (readonly, nonatomic) ACAccountStore *accountStore;
@property (readonly, nonatomic) CNUIAccountsFacadeRequestRunner *requestRunner;

- (id)init;
- (void).cxx_destruct;
- (void)fetchiCloudFamilyMembersWithCompletionHandler:(id /* block */)a0;
- (id)initWithAccountStore:(id)a0 requestRunner:(id)a1;

@end
