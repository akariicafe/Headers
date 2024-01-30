@class NSString, CLLocation, NSArray;

@interface LBLocalSpeechRecognitionSettings : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *requestId;
@property (readonly, nonatomic) NSString *inputOrigin;
@property (readonly, nonatomic) unsigned long long speechRecognitionTask;
@property (readonly, nonatomic) CLLocation *location;
@property (readonly, nonatomic) NSArray *jitGrammar;
@property (readonly, nonatomic) NSString *overrideModelPath;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithRequestId:(id)a0 inputOrigin:(id)a1 speechRecognitionTaskName:(unsigned long long)a2 location:(id)a3 jitGrammar:(id)a4 overrideModelPath:(id)a5;
- (id)initWithRequestId:(id)a0 inputOrigin:(id)a1 speechRecognitionTaskName:(unsigned long long)a2 location:(id)a3 jitGrammar:(id)a4;

@end
