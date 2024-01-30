@class NSDictionary, NSString;

@interface SXAVURLAssetFactory : NSObject <SXAVURLAssetFactory>

@property (readonly, copy, nonatomic) NSDictionary *options;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithOptions:(id)a0;
- (void).cxx_destruct;
- (id)createURLAssetWithURL:(id)a0;

@end
