@class NSString;
@protocol NPKCompanionViewServiceConnectionServerDelegate;

@interface NPKCompanionViewServiceConnectionServer : PDXPCService <NPKCompanionViewServiceConnectionServerProtocol>

@property (weak, nonatomic) id<NPKCompanionViewServiceConnectionServerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
