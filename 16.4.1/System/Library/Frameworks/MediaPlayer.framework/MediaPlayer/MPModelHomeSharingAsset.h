@class NSURL;

@interface MPModelHomeSharingAsset : MPModelObject

@property (nonatomic, getter=isAvailable) BOOL available;
@property (copy, nonatomic) NSURL *protectedContentSupportStorageFileURL;
@property (copy, nonatomic) NSURL *URL;

+ (id)__available_KEY;
+ (id)__URL_KEY;
+ (id)__protectedContentSupportStorageFileURL_KEY;


@end
