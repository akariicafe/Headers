@class NSString;

@interface PUVideoEditReviewAsset : PUReviewAsset {
    NSString *_trimmedVideoPath;
}

- (void).cxx_destruct;
- (id)pathForTrimmedVideoFile;
- (id)initWithReviewAsset:(id)a0 trimmedVideoPath:(id)a1;

@end
