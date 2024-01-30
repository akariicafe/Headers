@class NSString;
@protocol _MXExtensionURLHandling;

@interface _MXExtensionHostContext : _MXExtensionContext <_MXExtensionHostContextType>

@property (weak, nonatomic) id<_MXExtensionURLHandling> URLHandlingDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)openURL:(id)a0 completionHandler:(id /* block */)a1;
- (void).cxx_destruct;

@end
