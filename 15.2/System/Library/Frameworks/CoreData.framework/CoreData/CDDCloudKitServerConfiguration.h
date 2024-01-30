@class NSString;

@interface CDDCloudKitServerConfiguration : NSObject <NSCopying, NSSecureCoding> {
    NSString *_storeDirectoryPath;
    NSString *_machServiceName;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;

@end
