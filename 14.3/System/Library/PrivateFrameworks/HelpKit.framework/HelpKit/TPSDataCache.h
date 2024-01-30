@class NSString, NSDate;

@interface TPSDataCache : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL expired;
@property (nonatomic) unsigned long long cacheType;
@property (nonatomic) long long maxAge;
@property (nonatomic) unsigned long long fileSize;
@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSString *lastModified;
@property (retain, nonatomic) NSString *languageCode;
@property (retain, nonatomic) NSDate *updatedDate;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)debugDescription;
- (BOOL)expired;
- (void)encodeWithCoder:(id)a0;

@end
