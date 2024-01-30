@class NSDictionary, AFRequestInfo, NSNumber;

@interface SiriContinuityContext : SiriContext {
    NSNumber *_isTemporaryDevice;
}

@property (readonly, nonatomic) AFRequestInfo *requestInfo;
@property (readonly, nonatomic) NSDictionary *userActivity;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)speechRequestOptions;
- (id)initWithUserActivity:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (id)initWithRequestInfo:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isTemporaryDevice;
- (id)initWithSpeechRequestOptions:(id)a0;

@end
