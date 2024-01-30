@class NSString;
@protocol ARViewerVendorProtocol;

@interface _ARViewerViewController : UIViewController <ARViewerVendorProtocol>

@property (retain) id<ARViewerVendorProtocol> arviewerDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_exportedInterface;
+ (id)_remoteViewControllerInterface;

@end
