@class NSArray;

@interface NSCloudKitMirroringResetZoneRequest : NSCloudKitMirroringRequest {
    NSArray *_recordZoneIDsToReset;
}

- (id)initWithOptions:(id)a0 completionBlock:(id /* block */)a1;
- (void)dealloc;

@end
