@class _BlastDoorLPVideoProperties, NSString, NSURL, NSData;

@interface _BlastDoorLPVideo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSURL *streamingURL;
@property (retain, nonatomic) NSURL *youTubeURL;
@property (copy, nonatomic) NSData *data;
@property (copy, nonatomic) NSString *MIMEType;
@property (retain, nonatomic) NSURL *fileURL;
@property (nonatomic) BOOL hasAudio;
@property (copy, nonatomic) _BlastDoorLPVideoProperties *properties;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (BOOL)_shouldEncodeData;
- (unsigned long long)_encodedSize;
- (BOOL)isEqual:(id)a0;
- (id)_initWithVideo:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
