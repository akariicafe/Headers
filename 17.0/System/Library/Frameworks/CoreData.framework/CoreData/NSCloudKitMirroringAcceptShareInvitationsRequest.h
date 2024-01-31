@class NSArray;

@interface NSCloudKitMirroringAcceptShareInvitationsRequest : NSCloudKitMirroringRequest {
    NSArray *_shareURLsToAccept;
    NSArray *_shareMetadatasToAccept;
}

- (void)dealloc;
- (id)description;
- (id)initWithOptions:(id)a0 completionBlock:(id /* block */)a1;

@end
