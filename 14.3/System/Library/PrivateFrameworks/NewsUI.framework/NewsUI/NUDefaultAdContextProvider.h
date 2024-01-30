@class NSString;

@interface NUDefaultAdContextProvider : NSObject <NUAdContextProvider>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)provider;

- (id)adContextValueForKeyPath:(id)a0;

@end
