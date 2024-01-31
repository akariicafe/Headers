@class NSArray;

@interface NSCloudKitMirroringResetZoneRequest : NSCloudKitMirroringRequest {
    NSArray *_recordZoneIDsToReset;
}

- (void)dealloc;
- (id)initWithOptions:(id)a0 completionBlock:(id /* block */)a1;

@end
