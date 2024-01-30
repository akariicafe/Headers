@class NSString, NSDictionary;

@interface EKDirectoryRecord : NSObject

@property (retain, nonatomic) NSString *displayName;
@property (retain, nonatomic) NSString *preferredAddress;
@property (copy, nonatomic) NSString *principalPath;
@property (readonly) NSDictionary *userInfo;

- (void).cxx_destruct;
- (id)description;

@end
