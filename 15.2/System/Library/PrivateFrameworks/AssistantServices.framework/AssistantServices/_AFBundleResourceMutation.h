@class NSString, AFBundleResource;

@interface _AFBundleResourceMutation : NSObject <AFBundleResourceMutating> {
    AFBundleResource *_baseModel;
    NSString *_name;
    NSString *_extension;
    struct _mutationFlags { unsigned char isDirty : 1; unsigned char hasName : 1; unsigned char hasExtension : 1; } _mutationFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setExtension:(id)a0;
- (id)initWithBaseModel:(id)a0;
- (id)generate;
- (void)setName:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
