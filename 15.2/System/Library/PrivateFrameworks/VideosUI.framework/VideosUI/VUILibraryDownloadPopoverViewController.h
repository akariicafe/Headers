@class NSString, VUILibraryListItemView;
@protocol VUILibraryDownloadPopoverViewControllerDelegate;

@interface VUILibraryDownloadPopoverViewController : UIViewController <UIGestureRecognizerDelegate>

@property (retain, nonatomic) VUILibraryListItemView *listView;
@property (weak, nonatomic) id<VUILibraryDownloadPopoverViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
