@class NSString;

@interface ICReaderDelegateUtilities : NSObject <ICReaderDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)fileWrapperForURL:(id)a0;

- (id)fileWrapperForURL:(id)a0;

@end
