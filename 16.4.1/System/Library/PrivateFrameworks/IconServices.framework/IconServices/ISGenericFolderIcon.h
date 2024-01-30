@class ISResourceProvider;

@interface ISGenericFolderIcon : ISTypeIcon

@property (readonly) ISResourceProvider *resourceProvider;

+ (id)sharedInstance;

- (id)init;
- (id)makeResourceProvider;
- (void).cxx_destruct;

@end
