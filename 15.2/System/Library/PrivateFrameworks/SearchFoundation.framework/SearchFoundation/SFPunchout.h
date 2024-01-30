@class NSString, NSArray, SFUserActivityData, NSDictionary, NSData;

@interface SFPunchout : NSObject <SFPunchout, NSSecureCoding, NSCopying> {
    struct { unsigned char isRunnableInBackground : 1; unsigned char hasClip : 1; } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *bundleIdentifier;
@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) NSArray *urls;
@property (retain, nonatomic) SFUserActivityData *userActivityData;
@property (copy, nonatomic) NSString *actionTarget;
@property (nonatomic) BOOL isRunnableInBackground;
@property (nonatomic) BOOL hasClip;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)punchoutWithURL:(id)a0;
+ (id)punchoutWithURLs:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (BOOL)canOpenURL:(id)a0;
- (id)initWithProtobuf:(id)a0;
- (id)preferredOpenableURL;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)hasIsRunnableInBackground;
- (BOOL)hasHasClip;

@end
