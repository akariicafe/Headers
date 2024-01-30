@class NSString, NSExtensionContext;

@interface NUExtensionURLHandler : NSObject <NUURLHandling, SXURLHandling>

@property (readonly, nonatomic) NSExtensionContext *extensionContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
