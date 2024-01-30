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

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)description;

@end
