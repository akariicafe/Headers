@class NSString, BlastDoorImage;

@interface BlastDoorVideoPreview : NSObject {
    void /* unknown type, empty encoding */ videoPreview;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) BlastDoorImage *image;
@property (nonatomic, readonly) BOOL isAutoloop;

- (id)init;
- (void).cxx_destruct;

@end
