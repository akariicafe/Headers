@class NSString, NSError, NSDictionary;

@interface CUOSRecoveryProgressEvent : NSObject

@property (copy, nonatomic) NSString *authenticationText;
@property (copy, nonatomic) NSError *error;
@property (nonatomic) int type;
@property (readonly, copy, nonatomic) NSDictionary *configInfo;

- (void).cxx_destruct;

@end
