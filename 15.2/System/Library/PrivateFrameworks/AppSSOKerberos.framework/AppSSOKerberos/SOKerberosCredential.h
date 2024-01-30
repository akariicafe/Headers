@class NSString;

@interface SOKerberosCredential : NSObject

@property (retain) NSString *name;
@property unsigned int lifetime;
@property (retain) NSString *uuid;

- (void).cxx_destruct;
- (id)init;

@end
