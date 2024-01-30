@class NSString, NSXPCConnection;
@protocol SCLSuppressSchoolModeAssertionClientDelegate;

@interface SCLSuppressSchoolModeAssertionClient : NSObject <SCLSuppressSchoolModeAssertionXPCServer>

@property (nonatomic, getter=isAcquired) BOOL acquired;
@property (readonly, copy, nonatomic) NSString *explanation;
@property (nonatomic, getter=isEntitled) BOOL entitled;
@property (weak, nonatomic) id<SCLSuppressSchoolModeAssertionClientDelegate> delegate;
@property (readonly, nonatomic) NSXPCConnection *connection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithConnection:(id)a0;
- (void).cxx_destruct;
- (void)connectionDidInvalidate;
- (oneway void)acquireWithExplanation:(id)a0 UUID:(id)a1 completion:(id /* block */)a2;

@end
