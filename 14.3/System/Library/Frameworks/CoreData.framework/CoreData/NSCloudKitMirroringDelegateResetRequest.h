@class NSError;

@interface NSCloudKitMirroringDelegateResetRequest : NSCloudKitMirroringRequest

@property (readonly, nonatomic) NSError *causedByError;

- (void)dealloc;
- (id)initWithError:(id)a0 completionBlock:(id /* block */)a1;

@end
