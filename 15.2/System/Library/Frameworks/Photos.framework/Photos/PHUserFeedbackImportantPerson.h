@class NSString;

@interface PHUserFeedbackImportantPerson : NSObject

@property (readonly, copy) NSString *personUUID;
@property (readonly) unsigned long long type;

- (id)initWithPersonUUID:(id)a0 type:(unsigned long long)a1;
- (void).cxx_destruct;

@end
