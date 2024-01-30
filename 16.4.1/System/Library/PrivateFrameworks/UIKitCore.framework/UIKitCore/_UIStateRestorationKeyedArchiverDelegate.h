@class NSString;

@interface _UIStateRestorationKeyedArchiverDelegate : NSObject <NSKeyedArchiverDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedDelegate;

- (id)archiver:(id)a0 willEncodeObject:(id)a1;

@end
