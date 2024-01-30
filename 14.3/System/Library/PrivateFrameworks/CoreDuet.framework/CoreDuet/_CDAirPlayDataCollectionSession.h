@class NSString, NSData, NSDate;

@interface _CDAirPlayDataCollectionSession : NSObject <NSCopying, NSSecureCoding> {
    NSString *_identifier;
    NSData *_salt;
    NSDate *_latestStartDate;
    NSDate *_lastCollectionDate;
    unsigned long long _batchNumber;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
