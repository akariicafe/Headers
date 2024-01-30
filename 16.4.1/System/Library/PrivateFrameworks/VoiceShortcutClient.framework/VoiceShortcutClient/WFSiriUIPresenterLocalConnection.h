@class NSString;
@protocol WFSiriUIPresenterInterface;

@interface WFSiriUIPresenterLocalConnection : NSObject <WFSiriUIPresenterConnection>

@property (readonly, nonatomic) id<WFSiriUIPresenterInterface> presenter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithPresenter:(id)a0;
- (void).cxx_destruct;
- (id)presenterWithErrorHandler:(id /* block */)a0;

@end
