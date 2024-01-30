@class FCFeedDescriptor, NSString;

@interface NUFeedMetadataAdContextProvider : NSObject <NUAdContextProvider>

@property (readonly, nonatomic) FCFeedDescriptor *feedDescriptor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)adContextValueForKeyPath:(id)a0;
- (id)initWithFeedDescriptor:(id)a0;

@end
