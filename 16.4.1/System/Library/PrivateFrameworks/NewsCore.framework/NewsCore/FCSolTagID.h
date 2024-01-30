@class NSString;

@interface FCSolTagID : NSObject <NSSecureCoding, NSCopying> {
    BOOL _isFavorited;
    BOOL _isAutoFavorited;
    BOOL _isGroupable;
    NSString *_identifier;
    unsigned long long _whitelistLevel;
    double _specificity;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;

@end
