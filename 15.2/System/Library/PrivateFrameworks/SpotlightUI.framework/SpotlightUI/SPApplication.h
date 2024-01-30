@class NSString, NSMutableArray, NSURL;

@interface SPApplication : NSObject <NSSecureCoding> {
    NSString *_longDisplayName;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSString *displayNameInternal;
@property (retain, nonatomic) NSString *displayIdentifier;
@property (retain, nonatomic) NSString *displayName;
@property (retain, nonatomic) NSString *longDisplayName;
@property (retain, nonatomic) NSMutableArray *keywords;
@property (retain, nonatomic) NSURL *URL;
@property (retain, nonatomic) NSString *shortVersion;
@property (readonly, nonatomic) BOOL displayNameLoaded;
@property (retain, nonatomic) NSString *appBundleIdentifier;
@property (nonatomic) long long webClipType;
@property (readonly) BOOL isWebClip;
@property (readonly) BOOL isAppClip;
@property (readonly) NSString *utiType;
@property (retain, nonatomic) NSString *subtitle;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;

@end
