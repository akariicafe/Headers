@class NSString, LPMetadataProvider;

@interface ReadingListMetadataProvider : NSObject <ReadingListMetadataProvider> {
    LPMetadataProvider *_lpMetadataProvider;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)fetchMetadataForBookmark:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;

@end
