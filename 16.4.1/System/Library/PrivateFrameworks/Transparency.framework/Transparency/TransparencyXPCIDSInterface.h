@class NSString;

@interface TransparencyXPCIDSInterface : NSObject <TransparencyXPCProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)interface;


@end
