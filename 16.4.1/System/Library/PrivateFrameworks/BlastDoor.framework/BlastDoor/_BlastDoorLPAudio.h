@class NSString, NSData, NSURL, _BlastDoorLPAudioProperties;

@interface _BlastDoorLPAudio : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSData *data;
@property (retain, nonatomic) NSString *MIMEType;
@property (retain, nonatomic) NSURL *streamingURL;
@property (copy, nonatomic) _BlastDoorLPAudioProperties *properties;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)_initWithAudio:(id)a0;
- (unsigned long long)_encodedSize;
- (BOOL)_shouldEncodeData;

@end
