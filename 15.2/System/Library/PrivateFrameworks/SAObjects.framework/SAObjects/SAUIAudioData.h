@class NSData, SAUIAudioDescription, NSString;

@interface SAUIAudioData : AceObject <SAAceSerializable>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSData *audioBuffer;
@property (retain, nonatomic) SAUIAudioDescription *decoderStreamDescription;
@property (retain, nonatomic) SAUIAudioDescription *playerStreamDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)audioData;
+ (id)audioDataWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
