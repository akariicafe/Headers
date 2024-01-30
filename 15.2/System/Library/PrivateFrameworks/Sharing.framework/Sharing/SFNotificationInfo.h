@class NSString, NSURL, SFNotificationError;

@interface SFNotificationInfo : NSObject <NSSecureCoding, NSCopying> {
    SFNotificationInfo *_cachedMediumBubbleVersion;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) SFNotificationInfo *mediumBubbleVersion;
@property (nonatomic) unsigned int notificationType;
@property (retain, nonatomic) NSURL *attachmentURL;
@property (retain, nonatomic) NSString *body;
@property (nonatomic) unsigned char deviceClass;
@property (retain, nonatomic) SFNotificationError *error;
@property (retain, nonatomic) NSString *header;
@property (nonatomic) unsigned char interactionBehavior;
@property (nonatomic) unsigned char interactionDirection;
@property (retain, nonatomic) NSString *title;
@property (nonatomic) unsigned long long homePodType;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
