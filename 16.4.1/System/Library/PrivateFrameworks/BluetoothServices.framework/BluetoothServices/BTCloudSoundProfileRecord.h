@class NSData, NSURL;

@interface BTCloudSoundProfileRecord : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSData *soundProfileData;
@property (retain, nonatomic) NSURL *soundProfileFileURL;

+ (id)soundProfileRecordWithCustomData:(id)a0;
+ (id)soundProfileRecordWithFileURL:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithFileURL:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCustomData:(id)a0;

@end
