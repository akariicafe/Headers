@class NSUUID;

@interface CDDCloudKitMessage : NSObject <NSCoding, NSSecureCoding> {
    NSUUID *_identifier;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (id)init;
- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
