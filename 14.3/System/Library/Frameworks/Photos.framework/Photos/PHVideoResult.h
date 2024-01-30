@class NSURL, NSString;

@interface PHVideoResult : PHCompositeMediaResult

@property (retain, nonatomic) NSURL *videoURL;
@property (copy, nonatomic) NSString *uniformTypeIdentifier;

- (void).cxx_destruct;
- (id)allowedInfoKeys;
- (id)videoAdjustmentData;
- (void)setVideoAdjustmentData:(id)a0;
- (BOOL)containsValidData;

@end
