@class NSURL, NSData, NSString;

@interface PHVideoResult : PHCompositeMediaResult

@property (retain, nonatomic) NSURL *videoURL;
@property (retain, nonatomic) NSData *videoMediaItemMakerData;
@property (retain, nonatomic) NSString *fingerPrint;
@property (copy, nonatomic) NSString *uniformTypeIdentifier;

- (id)allowedInfoKeys;
- (void).cxx_destruct;
- (BOOL)containsValidData;
- (void)setVideoAdjustmentData:(id)a0;
- (id)videoAdjustmentData;

@end
