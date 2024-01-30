@class NSString, NSSet;

@interface CAMCaptureCoordinationInfo : NSObject

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSSet *allExpectedResultSpecifiers;
@property (readonly, nonatomic) unsigned long long resultSpecifiers;
@property (readonly, nonatomic, getter=isHDR) BOOL HDR;
@property (readonly, nonatomic, getter=isFiltered) BOOL filtered;
@property (readonly, nonatomic, getter=isOverCapture) BOOL overCapture;
@property (readonly, nonatomic, getter=isUnfilteredImageForFilteredPair) BOOL unfilteredImageForFilteredPair;
@property (readonly, nonatomic, getter=isFilteredImageForFilteredPair) BOOL filteredImageForFilteredPair;
@property (readonly, nonatomic, getter=isEV0ForHDREV0Pair) BOOL EV0ForHDREV0Pair;
@property (readonly, nonatomic, getter=isHDRForHDREV0Pair) BOOL HDRForHDREV0Pair;
@property (readonly, nonatomic, getter=isPrimaryAssetForOverCapturePair) BOOL primaryAssetForOverCapturePair;
@property (readonly, nonatomic, getter=isSecondaryAssetForOverCapturePair) BOOL secondaryAssetForOverCapturePair;
@property (readonly, nonatomic, getter=isFinalExpectedStillImageResult) BOOL finalExpectedStillImageResult;
@property (readonly, nonatomic, getter=isFinalExpectedVideoResult) BOOL finalExpectedVideoResult;
@property (readonly, nonatomic) BOOL representsFinalProcessedStillImage;
@property (readonly, nonatomic) BOOL representsFinalProcessedVideo;

- (void).cxx_destruct;
- (id)description;
- (id)initWithIdentifier:(id)a0 allExpectedResultSpecifiers:(id)a1 resultSpecifiers:(unsigned long long)a2;

@end
