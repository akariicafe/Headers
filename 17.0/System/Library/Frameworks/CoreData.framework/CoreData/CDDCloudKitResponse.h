@class CDDCloudKitMessage, NSError;

@interface CDDCloudKitResponse : NSObject <NSCoding, NSSecureCoding> {
    BOOL _success;
    CDDCloudKitMessage *_message;
    NSError *_error;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
