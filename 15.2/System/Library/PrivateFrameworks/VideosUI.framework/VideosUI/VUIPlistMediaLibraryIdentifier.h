@class NSURL, NSString;

@interface VUIPlistMediaLibraryIdentifier : NSObject <VUIMediaLibraryIdentifier>

@property (copy, nonatomic) NSURL *libraryFileURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
