@class NSString;

@interface IDSMessageToDelete : NSObject

@property unsigned int dataProtectionClass;
@property (retain, setter=setGUID:) NSString *guid;
@property (retain, setter=setAlternateGUID:) NSString *alternateGUID;

- (void).cxx_destruct;

@end
