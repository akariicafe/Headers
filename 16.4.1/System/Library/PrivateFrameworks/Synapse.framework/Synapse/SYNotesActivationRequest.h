@class NSArray, NSMutableArray;

@interface SYNotesActivationRequest : NSObject

@property (retain, nonatomic) NSMutableArray *_imagesData;
@property (retain, nonatomic) NSMutableArray *_urls;
@property (retain, nonatomic) NSMutableArray *_imageFileURLs;
@property (nonatomic) BOOL shouldAutoInsertLinkToCurrentActivity;
@property (readonly, nonatomic) NSArray *urls;
@property (readonly, nonatomic) NSArray *imagesData;
@property (readonly, nonatomic) NSArray *imageFileURLs;

- (id)init;
- (void).cxx_destruct;
- (void)addURL:(id)a0;
- (void)addURLs:(id)a0;
- (void)addImageData:(id)a0;
- (void)addImageFileURLs:(id)a0;
- (void)addImageFileURL:(id)a0;
- (void)addImagesData:(id)a0;

@end
