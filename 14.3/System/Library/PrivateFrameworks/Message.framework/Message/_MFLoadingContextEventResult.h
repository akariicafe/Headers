@class NSURL, NSArray;
@protocol EFInvocable;

@interface _MFLoadingContextEventResult : NSObject

@property (retain, nonatomic) NSURL *contentURL;
@property (retain, nonatomic) NSArray *relatedContentItems;
@property (retain, nonatomic) id<EFInvocable> cleanupInvocable;
@property (retain, nonatomic) NSURL *publicMessageURL;

- (void).cxx_destruct;

@end
