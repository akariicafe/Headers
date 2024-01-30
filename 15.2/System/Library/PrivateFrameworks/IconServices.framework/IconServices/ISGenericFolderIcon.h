@class ISResourceProvider;

@interface ISGenericFolderIcon : ISTypeIcon

@property (readonly) ISResourceProvider *resourceProvider;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (id)makeResourceProvider;

@end
