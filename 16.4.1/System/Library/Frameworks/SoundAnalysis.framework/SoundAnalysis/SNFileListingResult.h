@class NSArray, NSString;

@interface SNFileListingResult : NSObject <SNResult> {
    NSArray *_fileItems;
}

@property (readonly) NSArray *fileItems;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
