@class ISResourceProvider;

@interface ISGenericApplicationIcon : ISTypeIcon

@property (readonly) ISResourceProvider *resourceProvider;

+ (id)sharedInstance;

- (id)init;
- (id)makeResourceProvider;
- (void).cxx_destruct;

@end
