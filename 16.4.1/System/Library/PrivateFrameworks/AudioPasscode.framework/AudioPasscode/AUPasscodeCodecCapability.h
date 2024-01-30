@class NSString, NSArray;

@interface AUPasscodeCodecCapability : NSObject

@property (readonly, copy, nonatomic) NSString *algorithmName;
@property (readonly, nonatomic) NSArray *supportedSampleRates;
@property (readonly, nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } numChannelRange;

- (BOOL)isEqual:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithAlgorithmName:(id)a0;
- (BOOL)isEqualToPasscodeCodecCapability:(id)a0;

@end
