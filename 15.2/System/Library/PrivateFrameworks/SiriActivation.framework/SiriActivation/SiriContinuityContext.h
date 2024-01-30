@class NSDictionary, AFRequestInfo, NSNumber;

@interface SiriContinuityContext : SiriContext {
    NSNumber *_isTemporaryDevice;
}

@property (readonly, nonatomic) AFRequestInfo *requestInfo;
@property (readonly, nonatomic) NSDictionary *userActivity;

+ (BOOL)supportsSecureCoding;

- (id)initWithSpeechRequestOptions:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isTemporaryDevice;
- (id)initWithRequestInfo:(id)a0;
- (id)initWithUserActivity:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)speechRequestOptions;

@end
