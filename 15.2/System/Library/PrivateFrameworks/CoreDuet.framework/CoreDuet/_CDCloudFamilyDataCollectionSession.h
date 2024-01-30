@class NSString, NSData, NSDate;

@interface _CDCloudFamilyDataCollectionSession : NSObject <NSCopying, NSSecureCoding> {
    NSString *_identifier;
    NSData *_salt;
    NSDate *_latestStartDate;
    NSDate *_lastCollectionDate;
    unsigned long long _batchNumber;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
