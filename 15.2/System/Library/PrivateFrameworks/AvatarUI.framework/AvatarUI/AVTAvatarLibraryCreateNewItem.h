@class NSString;

@interface AVTAvatarLibraryCreateNewItem : NSObject <AVTAvatarLibraryItem>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)cellIdentifier;

- (void)configureCell:(id)a0 imageProvider:(id)a1;

@end
