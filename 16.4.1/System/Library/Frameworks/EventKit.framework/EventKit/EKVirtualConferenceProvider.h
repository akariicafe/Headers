@class NSString;

@interface EKVirtualConferenceProvider : NSObject <NSExtensionRequestHandling>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)beginRequestWithExtensionContext:(id)a0;
- (void)extendExpirationOfURL:(id)a0 toExpirationDate:(id)a1 withCompletion:(id /* block */)a2;
- (void)fetchAvailableRoomTypesWithCompletionHandler:(id /* block */)a0;
- (void)fetchVirtualConferenceForIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)invalidateURL:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)isURLValid:(id)a0 withCompletion:(id /* block */)a1;

@end
