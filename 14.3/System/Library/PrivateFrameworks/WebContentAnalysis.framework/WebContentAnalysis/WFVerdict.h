@class NSString, WFLSMResult;

@interface WFVerdict : NSObject {
    BOOL restricted;
    WFLSMResult *LSMEvaluationResult;
    NSString *message;
    NSString *URL;
    int evidence;
}

+ (id)verdictWithRestriction:(BOOL)a0 URL:(id)a1 evidence:(int)a2 LSMEvaluationResult:(id)a3 message:(id)a4;

- (id)URL;
- (void)setMessage:(id)a0;
- (void)dealloc;
- (void)setURL:(id)a0;
- (id)description;
- (void)setRestricted:(BOOL)a0;
- (id)message;
- (BOOL)restricted;
- (int)evidence;
- (void)setEvidence:(int)a0;
- (void)setLSMEvaluationResult:(id)a0;
- (id)LSMEvaluationResult;

@end
