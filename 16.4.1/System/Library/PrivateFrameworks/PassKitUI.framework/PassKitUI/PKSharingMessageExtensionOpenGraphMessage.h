@class NSString, UIImage, NSURL;

@interface PKSharingMessageExtensionOpenGraphMessage : NSObject <PKSharingMessageExtensionMessage> {
    NSURL *_url;
}

@property (nonatomic) BOOL isFromMe;
@property (nonatomic) BOOL isPending;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *subtitle;
@property (retain, nonatomic) UIImage *thumbnail;
@property (nonatomic) BOOL hasFetchedOpenGraphPreview;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithURL:(id)a0;
- (id)urlRepresentation;
- (id)init;
- (void).cxx_destruct;

@end
