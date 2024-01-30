@class NSURL, NSError;

@interface PKRevokeCredentialOperationInput : NSObject

@property (copy, nonatomic) NSURL *passURL;
@property (retain, nonatomic) NSError *error;

- (void).cxx_destruct;

@end
