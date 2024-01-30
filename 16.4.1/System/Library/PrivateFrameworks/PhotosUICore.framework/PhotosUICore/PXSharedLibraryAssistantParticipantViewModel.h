@class UIImage, NSString;

@interface PXSharedLibraryAssistantParticipantViewModel : PXObservable

@property (readonly, copy, nonatomic) UIImage *image;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *subtitle;

- (void)performChanges:(id /* block */)a0;
- (void)setImage:(id)a0;
- (void)setSubtitle:(id)a0;
- (id)init;
- (void)setTitle:(id)a0;
- (void).cxx_destruct;

@end
