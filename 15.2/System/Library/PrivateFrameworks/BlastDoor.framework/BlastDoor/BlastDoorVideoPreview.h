@class NSString, BlastDoorImage;

@interface BlastDoorVideoPreview : NSObject {
    void /* unknown type, empty encoding */ videoPreview;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) BlastDoorImage *image;
@property (nonatomic, readonly) BOOL isAutoloop;

- (void).cxx_destruct;
- (id)init;

@end
