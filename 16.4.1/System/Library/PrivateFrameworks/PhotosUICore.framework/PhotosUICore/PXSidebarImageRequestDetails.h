@class NSIndexSet, PXMediaProvider;

@interface PXSidebarImageRequestDetails : NSObject

@property (readonly, nonatomic) PXMediaProvider *mediaProvider;
@property (readonly, nonatomic) long long sidebarRequestID;
@property (copy, nonatomic) NSIndexSet *mediaRequestIDs;

- (void)cancel;
- (id)init;
- (void).cxx_destruct;
- (id)initWithMediaProvider:(id)a0 mediaRequestIDs:(id)a1;

@end
