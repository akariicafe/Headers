@class NSString;

@interface SNSplitDetectorInfo : NSObject

@property (readonly, nonatomic) NSString *detectorHead;
@property (readonly, nonatomic) NSString *featureExtractor;
@property (readonly, nonatomic) NSString *soundIdentifier;

- (void).cxx_destruct;
- (id)initWithDetectorHead:(id)a0 featureExtractor:(id)a1 soundIdentifier:(id)a2;

@end
