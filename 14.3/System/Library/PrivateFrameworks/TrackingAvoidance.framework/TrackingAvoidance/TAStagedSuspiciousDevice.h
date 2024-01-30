@class NSDate, TASuspiciousDevice;

@interface TAStagedSuspiciousDevice : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) TASuspiciousDevice *detection;
@property (readonly, nonatomic) NSDate *keepInStagingUntil;

- (id)descriptionDictionary;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithDetection:(id)a0 keepInStagingUntil:(id)a1;

@end
