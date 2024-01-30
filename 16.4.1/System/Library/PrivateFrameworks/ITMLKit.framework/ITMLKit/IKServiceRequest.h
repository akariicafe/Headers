@class IKAppContext, IKServiceContext;
@protocol IKServiceRequestDelegate;

@interface IKServiceRequest : NSObject {
    int _state;
    struct { BOOL hasDidCompleteWithStatus; } _srDelegateFlags;
}

@property (readonly, weak, nonatomic) IKAppContext *appContext;
@property (readonly, nonatomic) IKServiceContext *serviceContext;
@property (weak, nonatomic) id<IKServiceRequestDelegate> delegate;

- (void)send;
- (void)cancel;
- (void).cxx_destruct;
- (void)_completedWithStatus:(long long)a0 errorDictionary:(id)a1;
- (id)initWithAppContext:(id)a0 serviceContext:(id)a1;

@end
