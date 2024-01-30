@class NSString;

@interface NilAsset : NSObject <NLAsset>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)getAssetType;
- (id)getAssetPath;

@end
