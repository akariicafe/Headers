@class SGSimpleNamedEmailAddress, NSString, NSArray, CSPerson, NSDate, NSURL;

@interface SGOrigin : NSObject <NSCopying, NSSecureCoding> {
    NSString *_contextSnippet;
    struct _NSRange { unsigned long long location; unsigned long long length; } _contextSnippetRange;
    NSString *_operatingSystemVersion;
    BOOL _shouldShowOperatingSystemVersion;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) NSString *sourceKey;
@property (readonly, nonatomic) NSString *externalKey;
@property (readonly, nonatomic) NSString *contextSnippet;
@property (readonly, nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } contextSnippetRange;
@property (readonly, nonatomic) SGSimpleNamedEmailAddress *from;
@property (readonly, nonatomic) CSPerson *fromPerson;
@property (readonly, nonatomic) NSString *bundleId;
@property (readonly, nonatomic) NSString *localizedApplicationName;
@property (readonly, nonatomic) NSString *teamId;
@property (readonly, nonatomic) NSArray *to;
@property (readonly, nonatomic) NSArray *cc;
@property (readonly, nonatomic) NSArray *bcc;
@property (readonly, nonatomic) NSDate *date;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic, getter=isFromForwardedMessage) BOOL fromForwardedMessage;
@property (readonly, nonatomic) NSURL *url;

+ (id)originWithType:(unsigned long long)a0 sourceKey:(id)a1 externalKey:(id)a2 bundleId:(id)a3 fromForwardedMessage:(BOOL)a4;
+ (id)originWithType:(unsigned long long)a0 sourceKey:(id)a1 externalKey:(id)a2 fromForwardedMessage:(BOOL)a3;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)universalURL;
- (id)initWithType:(unsigned long long)a0 sourceKey:(id)a1 externalKey:(id)a2 bundleId:(id)a3 fromForwardedMessage:(BOOL)a4;
- (void)_resolveAppName;
- (BOOL)isEqualToOrigin:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
