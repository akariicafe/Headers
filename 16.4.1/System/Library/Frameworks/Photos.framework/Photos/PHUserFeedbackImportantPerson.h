@class NSString;

@interface PHUserFeedbackImportantPerson : NSObject

@property (readonly, copy) NSString *personUUID;
@property (readonly) unsigned long long type;

- (void).cxx_destruct;
- (id)initWithPersonUUID:(id)a0 type:(unsigned long long)a1;

@end
