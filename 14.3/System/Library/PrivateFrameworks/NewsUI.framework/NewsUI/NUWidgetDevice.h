@class NSString;

@interface NUWidgetDevice : NSObject <NUDevice>

@property (readonly, nonatomic, getter=isSplitScreen) BOOL splitScreen;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


@end
