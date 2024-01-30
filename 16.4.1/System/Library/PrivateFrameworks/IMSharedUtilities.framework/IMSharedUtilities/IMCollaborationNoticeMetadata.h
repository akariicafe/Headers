@class NSString, UTType, NSURL, NSNumber;

@interface IMCollaborationNoticeMetadata : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long type;
@property (retain, nonatomic) NSNumber *typeNumber;
@property (retain, nonatomic) NSString *bundleIdentifier;
@property (retain, nonatomic) NSURL *contentURL;
@property (retain, nonatomic) NSString *contentTitle;
@property (retain, nonatomic) UTType *contentType;
@property (retain, nonatomic) NSString *messageGUID;

+ (id)metadataWithType:(long long)a0 bundleIdentifier:(id)a1 contentURL:(id)a2 contentTitle:(id)a3 contentType:(id)a4 messageGUID:(id)a5;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)initWithNoticeType:(long long)a0 bundleIdentifier:(id)a1 contentURL:(id)a2 contentTitle:(id)a3 contentType:(id)a4 messageGUID:(id)a5;

@end
