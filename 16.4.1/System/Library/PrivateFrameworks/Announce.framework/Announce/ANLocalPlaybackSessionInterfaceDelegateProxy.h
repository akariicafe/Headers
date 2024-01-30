@class NSString;
@protocol ANLocalPlaybackSessionServiceInterfaceDelegate;

@interface ANLocalPlaybackSessionInterfaceDelegateProxy : NSObject <ANLocalPlaybackSessionServiceInterfaceDelegate>

@property (weak, nonatomic) id<ANLocalPlaybackSessionServiceInterfaceDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
