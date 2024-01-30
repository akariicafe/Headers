@class NSError, UIWebClip;

@interface SBFWebClipSanitationReport : NSObject

@property (readonly, nonatomic) UIWebClip *webClip;
@property (readonly, nonatomic) long long result;
@property (readonly, copy, nonatomic) NSError *error;

- (void).cxx_destruct;
- (id)description;
- (id)initWithWebClip:(id)a0 result:(long long)a1 error:(id)a2;

@end
