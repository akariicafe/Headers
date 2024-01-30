@class NSData, NSString;

@interface CTStewieEmergencyStartMessage : NSObject <CTStewieMessageOutgoing>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long conversationID;
@property (retain, nonatomic) NSData *serializedQuestionnaireAnswers;
@property (nonatomic) long long notifyOption;
@property (nonatomic) BOOL shareEED;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqualToEmergencyStartMessage:(id)a0;
- (double)estimatedSendTime;

@end
