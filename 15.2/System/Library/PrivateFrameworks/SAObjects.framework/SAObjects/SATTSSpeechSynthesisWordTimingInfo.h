@class NSNumber, NSString;

@interface SATTSSpeechSynthesisWordTimingInfo : AceObject <SAAceSerializable>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long length;
@property (nonatomic) long long offset;
@property (copy, nonatomic) NSNumber *sampleIndex;
@property (nonatomic) float timestamp;
@property (copy, nonatomic) NSString *word;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)speechSynthesisWordTimingInfo;
+ (id)speechSynthesisWordTimingInfoWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
