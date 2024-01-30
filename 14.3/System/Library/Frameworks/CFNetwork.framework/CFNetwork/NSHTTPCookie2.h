@class NSString, NSDate;

@interface NSHTTPCookie2 : NSObject <NSCopying, NSMutableCopying> {
    NSString *_etldPlusOne;
    unsigned long long _sCreationDate;
    unsigned long long _sExpirationDate;
    unsigned long long _sLastAccessTime;
    BOOL _session;
}

@property (readonly) NSString *name;
@property (readonly) NSString *value;
@property (readonly) NSString *domain;
@property (readonly) NSString *path;
@property (readonly) NSDate *creationDate;
@property (readonly) NSDate *expirationDate;
@property (readonly) BOOL sesion;
@property (readonly) BOOL secure;
@property (readonly) BOOL httpOnly;
@property (readonly) BOOL hostOnly;
@property (readonly) NSString *partition;
@property (readonly) long long source;
@property (readonly) long long sameSite;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithName:(id)a0 value:(id)a1 domain:(id)a2;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)description;

@end
