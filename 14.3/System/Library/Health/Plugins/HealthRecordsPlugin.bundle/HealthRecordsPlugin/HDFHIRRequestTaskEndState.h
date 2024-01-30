@class NSURL;

@interface HDFHIRRequestTaskEndState : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSURL *requestedURL;
@property (readonly, nonatomic) long long responseStatusCode;
@property (readonly, nonatomic) double requestDuration;

+ (id)unitTestSuccessState;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)initWithRequestedURL:(id)a0 responseStatusCode:(long long)a1 requestDuration:(double)a2;

@end
