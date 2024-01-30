@class NSString;
@protocol SHShazamKitClient;

@interface SHShazamKitServiceConnectionClient : NSObject <SHShazamKitClient>

@property (weak, nonatomic) id<SHShazamKitClient> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)_library:(id)a0 didChangeWithSnapshot:(id)a1;
- (void)_library:(id)a0 didProduceError:(id)a1 failedItemIdentifiers:(id)a2;
- (void)_libraryDidCompleteSync:(id)a0;
- (void)_libraryWillBeginSync:(id)a0;
- (void)matcher:(id)a0 didProduceResponse:(id)a1;

@end
