@class NSArray, NSString, NSURL, UIImage, NSObject;
@protocol OS_dispatch_queue;

@interface AFUIRemoteImageRepresentation : NSObject <NSItemProviderWriting> {
    NSObject<OS_dispatch_queue> *_queue;
}

@property (class, readonly, copy, nonatomic) NSArray *writableTypeIdentifiersForItemProvider;

@property (copy, nonatomic) NSURL *imageURL;
@property (retain, nonatomic) UIImage *image;
@property (readonly, copy, nonatomic) NSArray *writableTypeIdentifiersForItemProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_commonInit;
- (id)loadDataWithTypeIdentifier:(id)a0 forItemProviderCompletionHandler:(id /* block */)a1;
- (void).cxx_destruct;
- (id)initWithImageURL:(id)a0;

@end
