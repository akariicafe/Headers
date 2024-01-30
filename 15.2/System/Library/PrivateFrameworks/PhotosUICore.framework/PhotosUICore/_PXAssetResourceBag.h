@class NSURL;

@interface _PXAssetResourceBag : NSObject

@property (readonly, nonatomic) long long resourceType;
@property (readonly, nonatomic) NSURL *url;

- (void).cxx_destruct;
- (id)initWithResourceType:(long long)a0 atURL:(id)a1;

@end
