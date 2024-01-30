@class NSString, BlastDoorMediaMetadata, BlastDoorMachImage;

@interface BlastDoorLargeImage : NSObject {
    void /* unknown type, empty encoding */ largeImage;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) BlastDoorMachImage *image;
@property (nonatomic, readonly) BlastDoorMediaMetadata *metadata;

- (id)init;
- (void).cxx_destruct;

@end
