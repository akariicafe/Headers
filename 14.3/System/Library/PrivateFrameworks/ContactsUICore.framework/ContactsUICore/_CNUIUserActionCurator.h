@class CNContactStore, NSString;
@protocol CNLSApplicationWorkspace;

@interface _CNUIUserActionCurator : NSObject <CNUIUserActionCurator>

@property (retain, nonatomic) CNContactStore *contactStore;
@property (retain, nonatomic) id<CNLSApplicationWorkspace> applicationWorkspace;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithContactStore:(id)a0 applicationWorkspace:(id)a1;
- (id)curateUserAction:(id)a0;

@end
