@class NSString, NSMutableArray;

@interface _PXSharedLibrarySettingsSection : NSObject

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *caption;
@property (readonly, nonatomic) NSMutableArray *items;

- (void).cxx_destruct;
- (void)addItemWithConfigurationHandler:(id /* block */)a0;

@end
