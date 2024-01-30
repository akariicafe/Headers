@class NSString;

@interface FPFileManagerFixPermDelegate : NSObject <NSFileManagerDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)fileManager:(id)a0 shouldRemoveItemAtURL:(id)a1;

@end
