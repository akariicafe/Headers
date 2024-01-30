@class NSNumber, NSString;

@interface SAUIAudioDescription : AceObject <SAAceSerializable>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSNumber *bitsPerChannel;
@property (copy, nonatomic) NSNumber *bytesPerFrame;
@property (copy, nonatomic) NSNumber *bytesPerPacket;
@property (copy, nonatomic) NSNumber *channelsPerFrame;
@property (copy, nonatomic) NSString *format;
@property (copy, nonatomic) NSNumber *formatFlags;
@property (copy, nonatomic) NSNumber *formatID;
@property (copy, nonatomic) NSNumber *framesPerPacket;
@property (copy, nonatomic) NSNumber *reserved;
@property (copy, nonatomic) NSNumber *sampleRate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)audioDescription;
+ (id)audioDescriptionWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
