@class NSString, TPSDocument, NSDictionary, NSURL;

@interface TPSNotificationCache : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *locale;
@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) NSString *collectionIdentifier;
@property (retain, nonatomic) TPSDocument *document;
@property (retain, nonatomic) NSDictionary *extensionPayload;
@property (retain, nonatomic) NSURL *attachmentURL;

+ (id)notificationCacheWithCollectionIdentifier:(id)a0 document:(id)a1 type:(unsigned long long)a2;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)hasLocaleChanged;
- (id)debugDescription;
- (void).cxx_destruct;
- (id)initWithCollectionIdentifier:(id)a0 document:(id)a1 type:(unsigned long long)a2;

@end
