@class NSURL, NSString, NSDate;

@interface SGURL : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSURL *url;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *receivedFromHandle;
@property (readonly, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic) NSString *groupIdentifier;
@property (readonly, nonatomic) NSString *documentIdentifier;
@property (readonly, nonatomic) NSString *documentTitle;
@property (readonly, nonatomic) NSDate *documentDate;
@property (readonly, nonatomic) double documentTimeInterval;
@property (readonly, nonatomic) NSDate *receivedAt;
@property (readonly, nonatomic) unsigned char flags;

- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqualToURL:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithURL:(id)a0 title:(id)a1 receivedFromHandle:(id)a2 bundleIdentifier:(id)a3 groupIdentifier:(id)a4 documentIdentifier:(id)a5 documentTitle:(id)a6 documentDate:(id)a7 documentTimeInterval:(double)a8 receivedAt:(id)a9 flags:(unsigned char)a10;
- (id)feedbackDescription;
- (id)nonFeedbackFlagDescription;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;

@end
