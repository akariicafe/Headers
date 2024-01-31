@class NSArray, NSString;

@interface CNPropertyIDSRequest : NSObject <IDSIDQueryControllerDelegate>

@property (retain, nonatomic) NSArray *propertyItems;
@property (retain, nonatomic) NSString *listenerID;
@property (retain, nonatomic) NSString *service;
@property (copy) id /* block */ requestResultBlock;
@property (copy, nonatomic) id /* block */ idQueryResultHandler;
@property (readonly, nonatomic) BOOL cancelled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedWorkQueue;

- (void)idStatusUpdatedForDestinations:(id)a0 service:(id)a1;
- (void).cxx_destruct;
- (void)cancel;
- (void)cleanupDelegate;
- (void)_requestStatusOnMainQueue:(BOOL)a0;
- (id)initWithPropertyItems:(id)a0 service:(id)a1 postToMainQueue:(BOOL)a2 resultBlock:(id /* block */)a3;

@end
