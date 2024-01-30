@class NSString, UIView;

@interface SBUIExpandedNotificationContainerViewProvider : NSObject <NCContainerViewProviding> {
    id /* block */ _invalidationBlock;
    BOOL _invalidated;
}

@property (readonly, weak, nonatomic) id requester;
@property (readonly, copy, nonatomic) NSString *reason;
@property (readonly, nonatomic, getter=isValid) BOOL valid;
@property (readonly, weak, nonatomic) UIView *containerView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)invalidate;
- (void).cxx_destruct;
- (id)initWithRequester:(id)a0 containerView:(id)a1 reason:(id)a2 invalidationBlock:(id /* block */)a3;

@end
