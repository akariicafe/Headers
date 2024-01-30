@class NSString;
@protocol ARViewerHostProtocol;

@interface _ARViewerRemoteViewController : _UIRemoteViewController <ARViewerHostProtocol>

@property (retain) id<ARViewerHostProtocol> arviewerDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;

@end
