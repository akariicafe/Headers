@class NSString, NSData, NSURL;

@interface NNMKComposedMessageAttachment : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *fileName;
@property (retain, nonatomic) NSData *data;
@property (retain, nonatomic) NSURL *url;
@property (retain, nonatomic) NSString *mimeType;
@property (retain, nonatomic) NSString *utiType;
@property (nonatomic) unsigned long long fileSize;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (BOOL)prepareForArchiving;
- (void)logTransmission;

@end
