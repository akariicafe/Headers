@class NSString, NSArray;

@interface _LTTranslationSensesLoggingRequest : NSObject <_LTLoggingRequest>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *conversationID;
@property (copy, nonatomic) NSString *requestID;
@property (copy, nonatomic) NSArray *senses;
@property (copy, nonatomic) NSArray *userInteractedSenses;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
