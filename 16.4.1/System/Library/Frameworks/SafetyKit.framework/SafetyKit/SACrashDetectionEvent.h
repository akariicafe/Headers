@class CLLocation, NSDate;

@interface SACrashDetectionEvent : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL isNotified;
@property (readonly, nonatomic) double elapsed;
@property (readonly, nonatomic) NSDate *timeOfResolution;
@property (readonly, nonatomic) NSDate *date;
@property (readonly, nonatomic) long long response;
@property (readonly, nonatomic) CLLocation *location;

+ (double)crashDetectionEventTimeout;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithTimeOfDetection:(id)a0 timeOfResolution:(id)a1 response:(long long)a2 location:(id)a3;
- (id)initWithTimeOfDetection:(id)a0 timeOfResolution:(id)a1 response:(long long)a2 location:(id)a3 isNotified:(BOOL)a4;

@end
