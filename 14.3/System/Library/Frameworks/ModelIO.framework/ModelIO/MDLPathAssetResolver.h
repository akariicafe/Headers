@class NSString;

@interface MDLPathAssetResolver : NSObject <MDLAssetResolver> {
    NSString *_path;
}

@property (copy, nonatomic) NSString *path;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
