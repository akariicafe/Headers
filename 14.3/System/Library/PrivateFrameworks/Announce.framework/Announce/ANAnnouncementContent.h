@class NSURL, NSString, NSUUID;

@interface ANAnnouncementContent : NSObject <NSSecureCoding> {
    NSString *_endpointIdentifier;
    NSUUID *_homeKitUserIdentifier;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSURL *audioFileURL;
@property (retain, nonatomic) NSString *transcription;

+ (id)contentWithAudioFileURL:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)setHomeKitUserIdentifier:(id)a0;
- (id)description;
- (id)homeKitUserIdentifier;
- (void)setEndpointIdentifier:(id)a0;
- (id)endpointIdentifier;
- (void)encodeWithCoder:(id)a0;

@end
