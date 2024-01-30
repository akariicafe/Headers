@class NSURL, NSString, NSUUID;

@interface ANAnnouncementContent : NSObject <NSSecureCoding> {
    NSString *_endpointIdentifier;
    NSUUID *_homeKitUserIdentifier;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSURL *audioFileURL;
@property (retain, nonatomic) NSString *transcription;

+ (id)contentWithAudioFileURL:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)homeKitUserIdentifier;
- (id)endpointIdentifier;
- (id)initWithCoder:(id)a0;
- (void)setEndpointIdentifier:(id)a0;
- (void)setHomeKitUserIdentifier:(id)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
