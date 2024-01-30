@class NSArray, NSString, NSDate;

@interface SGContactDetailSupervision : NSObject

@property (nonatomic) BOOL regexBelongsToSender;
@property (nonatomic) BOOL regexDoesNotBelongToSender;
@property (nonatomic) BOOL isFirstPerson;
@property (nonatomic) BOOL isThirdPerson;
@property (readonly, nonatomic) NSArray *matchingContacts;
@property (nonatomic) BOOL isUnlikelyPhone;
@property (nonatomic) unsigned long long ignoreAfter;
@property (weak, nonatomic) NSDate *matchDate;
@property (weak, nonatomic) NSString *senderDisplayName;

- (void).cxx_destruct;
- (id)initWithMessage:(id)a0 ddMatch:(id)a1 isUnlikelyPhone:(BOOL)a2;
- (struct SGMContactDetailFoundIn_ { unsigned long long x0; })metricsContactDetailFoundIn;
- (struct SGMContactDetailOwner_ { unsigned long long x0; })metricsContactDetailOwner;

@end
