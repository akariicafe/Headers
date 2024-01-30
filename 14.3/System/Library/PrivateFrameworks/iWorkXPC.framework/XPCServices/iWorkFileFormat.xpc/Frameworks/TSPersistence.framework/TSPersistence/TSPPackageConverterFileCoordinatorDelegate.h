@class NSString, NSURL;

@interface TSPPackageConverterFileCoordinatorDelegate : NSObject <TSPFileCoordinatorDelegate> {
    NSURL *_URL;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
