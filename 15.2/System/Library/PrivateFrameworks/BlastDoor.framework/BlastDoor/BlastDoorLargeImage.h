@class NSString, BlastDoorMediaMetadata, BlastDoorMachImage;

@interface BlastDoorLargeImage : NSObject {
    void /* unknown type, empty encoding */ largeImage;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) BlastDoorMachImage *image;
@property (nonatomic, readonly) BlastDoorMediaMetadata *metadata;

- (void).cxx_destruct;
- (id)init;

@end
