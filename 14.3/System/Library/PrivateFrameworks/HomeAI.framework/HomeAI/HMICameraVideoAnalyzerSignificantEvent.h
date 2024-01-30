@class NSDictionary, HMICameraVideoFrame;

@interface HMICameraVideoAnalyzerSignificantEvent : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSDictionary *annotationScores;
@property (readonly) long long events;
@property (readonly) HMICameraVideoFrame *videoFrame;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (long long)confidenceThatEventOccurred:(long long)a0;
- (id)initWithEvents:(long long)a0 annotationScores:(id)a1 videoFrame:(id)a2;

@end
