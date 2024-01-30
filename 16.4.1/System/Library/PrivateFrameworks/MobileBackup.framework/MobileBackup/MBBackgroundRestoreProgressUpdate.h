@interface MBBackgroundRestoreProgressUpdate : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL isThermallyThrottled;
@property (nonatomic) BOOL hasCellularPolicy;
@property (nonatomic) BOOL isOnWiFi;
@property (nonatomic) BOOL isOnInexpensiveCellular;
@property (nonatomic) unsigned long long estimatedSize;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;

@end
