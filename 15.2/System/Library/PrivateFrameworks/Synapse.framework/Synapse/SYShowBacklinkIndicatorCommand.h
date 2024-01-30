@class NSString;
@protocol SYShowBacklinkIndicatorCommandImpl;

@interface SYShowBacklinkIndicatorCommand : NSObject <SYShowBacklinkIndicatorCommandImpl>

@property (retain, nonatomic) id<SYShowBacklinkIndicatorCommandImpl> _impl;
@property (readonly, nonatomic, getter=isActive) BOOL active;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
