@class NSString;

@interface WTFWebFileManagerDelegate : NSObject <NSFileManagerDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)fileManager:(id)a0 shouldProceedAfterError:(id)a1 movingItemAtURL:(id)a2 toURL:(id)a3;

@end
