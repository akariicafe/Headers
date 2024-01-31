@class PRUISPosterSnapshotRequest;

@interface CNPRUISPosterSnapshotRequest : NSObject

@property (readonly, nonatomic) PRUISPosterSnapshotRequest *wrappedRequest;

+ (id)requestForConfiguration:(id)a0 definition:(id)a1 interfaceOrientation:(long long)a2;
+ (id)requestForConfiguration:(id)a0 definition:(id)a1 interfaceOrientation:(long long)a2 windowScene:(id)a3 attachments:(id)a4;

- (void).cxx_destruct;
- (id)initWithWrappedRequest:(id)a0;

@end
