@class NSString;

@interface PUVideoEditReviewAsset : PUReviewAsset {
    NSString *_trimmedVideoPath;
}

- (void).cxx_destruct;
- (id)initWithReviewAsset:(id)a0 trimmedVideoPath:(id)a1;
- (id)pathForTrimmedVideoFile;

@end
