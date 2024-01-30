@class NSArray, NSString, NSObject;
@protocol CXVoicemailObserverDelegate, OS_dispatch_queue, CXVoicemailObserverDataSource;

@interface CXVoicemailObserver : NSObject <CXVoicemailObserverDataSourceDelegate>

@property (weak, nonatomic) id<CXVoicemailObserverDelegate> delegate;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) id<CXVoicemailObserverDataSource> dataSource;
@property (readonly, copy, nonatomic) NSArray *voicemails;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setDelegate:(id)a0 queue:(id)a1;
- (void)_performDelegateCallback:(id /* block */)a0;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)dataSourceVoicemailsChanged:(id)a0;
- (id)initWithDataSource:(id)a0 queue:(id)a1;

@end
