@class NSURL, NSArray;
@protocol EFInvocable;

@interface _MFLoadingContextEventResult : NSObject {
    NSURL *_contentURL;
    NSArray *_relatedContentItems;
    id<EFInvocable> _cleanupInvocable;
    NSURL *_publicMessageURL;
}

- (void).cxx_destruct;

@end
