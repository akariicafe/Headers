@class NSString;

@interface MPHSBrowserDelegate : NSObject <HSBrowserDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)browser:(id)a0 didAddLibrary:(id)a1;
- (void)browser:(id)a0 didRemoveLibrary:(id)a1;

@end
