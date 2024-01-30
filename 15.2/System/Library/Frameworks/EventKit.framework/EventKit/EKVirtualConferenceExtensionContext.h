@class NSString, NSURL;

@interface EKVirtualConferenceExtensionContext : NSExtensionContext

@property (readonly, nonatomic) int requestType;
@property (readonly, nonatomic) NSString *roomTypeIdentifier;
@property (readonly, nonatomic) NSURL *URLForInvalidation;

+ (id)_allowedItemPayloadClasses;

- (void)completeRequestWithAvailableRoomTypes:(id)a0 completionHandler:(id /* block */)a1;
- (void)completeRequestWithVirtualConference:(id)a0 completionHandler:(id /* block */)a1;
- (void)completeRequestWithInvalidationSuccess:(BOOL)a0 error:(id)a1 completionHandler:(id /* block */)a2;

@end
