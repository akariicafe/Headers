@class NSArray;

@interface MBBackgroundRestoreInfo : NSObject <NSSecureCoding, NSCopying> {
    int dataClassesRemaining;
    unsigned long long bytesRemaining;
    NSArray *failedDomains;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property int dataClassesRemaining;
@property unsigned long long bytesRemaining;
@property (retain) NSArray *failedDomains;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;

@end
