@class NSString, NSDictionary;

@interface SFFormsMetadataProvider : NSObject <WBSFormsMetadataProvider> {
    NSDictionary *_frameHandleToForms;
}

@property (readonly, nonatomic) unsigned long long formCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)enumerateFormsUsingBlock:(id /* block */)a0;
- (id)initWithFrameHandleToFormsDictionary:(id)a0;

@end
