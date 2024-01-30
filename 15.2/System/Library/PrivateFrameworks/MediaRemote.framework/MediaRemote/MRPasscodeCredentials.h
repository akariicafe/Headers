@class NSString;

@interface MRPasscodeCredentials : NSObject

@property (nonatomic) unsigned int type;
@property (nonatomic) unsigned long long characterCount;
@property (copy, nonatomic) NSString *passcode;

+ (id)standardCredentials;

- (void).cxx_destruct;

@end
