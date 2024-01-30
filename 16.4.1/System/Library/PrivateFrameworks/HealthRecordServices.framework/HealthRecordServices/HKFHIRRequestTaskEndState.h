@class NSURL, NSString;

@interface HKFHIRRequestTaskEndState : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSURL *requestedURL;
@property (readonly, nonatomic) long long responseStatusCode;
@property (readonly, nonatomic) double requestDuration;
@property (readonly, nonatomic) BOOL hadError;
@property (readonly, copy, nonatomic) NSString *eventLoggingDescription;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)asErrorEndState;
- (id)initWithRequestedURL:(id)a0 responseStatusCode:(long long)a1 requestDuration:(double)a2 hadError:(BOOL)a3;

@end
