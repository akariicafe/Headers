@class UIImage, NSString, NSArray;

@interface _WBSTabGroupIconMetadata : NSObject {
    NSString *_uuid;
    NSArray *_tabUrlArray;
}

@property (copy) UIImage *iconImage;
@property (retain, nonatomic) id token;

- (id)_configuration;
- (BOOL)hasSameIconAsTabGroup:(id)a0;
- (id)initWithTabGroup:(id)a0 token:(id)a1;
- (id)_arrayOfThumbnailURLsShownInFolderIconFromTabsArray:(id)a0;
- (void).cxx_destruct;

@end
