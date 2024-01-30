@class NSURL, NSString;

@interface PHVideoResult : PHCompositeMediaResult

@property (retain, nonatomic) NSURL *videoURL;
@property (copy, nonatomic) NSString *uniformTypeIdentifier;

- (BOOL)containsValidData;
- (id)allowedInfoKeys;
- (void).cxx_destruct;
- (id)videoAdjustmentData;
- (void)setVideoAdjustmentData:(id)a0;

@end
