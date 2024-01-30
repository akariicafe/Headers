@class NSString;

@interface SNDetectSpeechUtteranceRequest : NSObject <SNAnalyzerCreating, NSCopying, NSSecureCoding, SNRequest>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) long long requestType;
@property (readonly) double decisionDelay;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithRequestType:(long long)a0;
- (void)encodeWithCoder:(id)a0;
- (id)createAnalyzerWithError:(id *)a0;
- (BOOL)isEqualToDetectSpeechUtteranceRequest:(id)a0;

@end
