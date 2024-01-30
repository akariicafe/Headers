@class NSString, NSURL;

@interface SNFileCopyingResult : NSObject <SNResult> {
    NSString *_filename;
    long long _fileSize;
    NSURL *_itemURL;
}

@property (readonly) NSString *filename;
@property (readonly) long long fileSize;
@property (readonly) NSURL *itemURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
