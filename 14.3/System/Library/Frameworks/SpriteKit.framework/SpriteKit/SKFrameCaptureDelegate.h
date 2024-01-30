@class NSString;

@interface SKFrameCaptureDelegate : NSObject <NSKeyedArchiverDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)archiver:(id)a0 willEncodeObject:(id)a1;
- (void)archiver:(id)a0 didEncodeObject:(id)a1;

@end
