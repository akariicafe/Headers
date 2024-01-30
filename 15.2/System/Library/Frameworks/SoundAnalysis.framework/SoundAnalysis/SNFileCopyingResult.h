@class NSString, NSURL;

@interface SNFileCopyingResult : NSObject <SNResult>

@property (retain, nonatomic) NSString *filename;
@property (nonatomic) long long fileSize;
@property (retain, nonatomic) NSURL *itemURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithFileItem:(id)a0;

@end
