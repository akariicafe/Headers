@class NSString;

@interface NUDeepLinkURLModifier : NSObject <NUURLModifying>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)modifyURL:(id)a0;

@end
