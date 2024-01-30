@class NSArray;

@interface WK_RTCRtpFragmentationHeader : NSObject

@property (retain, nonatomic) NSArray *fragmentationOffset;
@property (retain, nonatomic) NSArray *fragmentationLength;
@property (retain, nonatomic) NSArray *fragmentationTimeDiff;
@property (retain, nonatomic) NSArray *fragmentationPlType;

- (void).cxx_destruct;

@end
