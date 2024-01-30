@class DIIdentityRequest, NSError, DIIdentityDocument;
@protocol DIIdentityDocumentDescriptor;

@interface CoreIDV.DigitalPresentmentSession : NSObject {
    void /* unknown type, empty encoding */ connection;
}

- (id)init;
- (void)cancelRequest;
- (void).cxx_destruct;
- (void)checkCanRequestDocument:(id<DIIdentityDocumentDescriptor>)a0 completionHandler:(void (^)(BOOL))a1;
- (void)requestDocument:(DIIdentityRequest *)a0 completionHandler:(void (^)(DIIdentityDocument *, NSError *))a1;

@end
