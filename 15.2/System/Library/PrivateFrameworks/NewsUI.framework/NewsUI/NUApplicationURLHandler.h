@class NSString;

@interface NUApplicationURLHandler : NSObject <NUURLHandling>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)openURL:(id)a0 options:(id)a1 completion:(id /* block */)a2;

@end
