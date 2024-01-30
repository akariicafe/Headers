@class NSString, TPSDocument, NSDictionary, NSURL;

@interface TPSNotificationCache : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *locale;
@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) NSString *collectionIdentifier;
@property (retain, nonatomic) TPSDocument *document;
@property (retain, nonatomic) NSDictionary *extensionPayload;
@property (retain, nonatomic) NSURL *attachmentURL;

+ (id)classSet;
+ (id)notificationCacheWithCollectionIdentifier:(id)a0 document:(id)a1 type:(unsigned long long)a2;

- (BOOL)hasLocaleChanged;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)debugDescription;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCollectionIdentifier:(id)a0 document:(id)a1 type:(unsigned long long)a2;

@end
