@class NSData, VIImageRegion;

@interface VIStreamingSignalExtractionResult : NSObject

@property (readonly, nonatomic) VIImageRegion *imageRegion;
@property (readonly, nonatomic) NSData *payload;

- (void).cxx_destruct;
- (id)initWithImageRegion:(id)a0 payload:(id)a1;

@end
