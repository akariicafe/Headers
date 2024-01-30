@class NSURL, NSString;

@interface TSPTemporaryFileCoordinatorDelegate : NSObject <TSPFileCoordinatorDelegate>

@property (copy, nonatomic) NSURL *URL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
