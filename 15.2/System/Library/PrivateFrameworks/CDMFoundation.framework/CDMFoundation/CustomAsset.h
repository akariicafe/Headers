@class NSString;

@interface CustomAsset : NSObject <NLAsset> {
    NSString *_path;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithPath:(id)a0;
- (void).cxx_destruct;
- (long long)getAssetType;
- (id)getAssetPath;

@end
