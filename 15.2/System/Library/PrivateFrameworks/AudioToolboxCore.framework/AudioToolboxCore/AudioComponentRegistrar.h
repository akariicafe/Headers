@class NSString;

@interface AudioComponentRegistrar : NSObject <NSXPCListenerDelegate>

@property (readonly, nonatomic) void *impl;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
