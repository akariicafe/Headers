@class NSString;
@protocol SKAccountPageViewControllerDelegate;

@interface BridgedAccountPageViewControllerFactory : NSObject <SKAccountPageViewControllerDelegate>

@property (weak, nonatomic) id<SKAccountPageViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)createAccountPageViewControllerFor:(id)a0;

@end
