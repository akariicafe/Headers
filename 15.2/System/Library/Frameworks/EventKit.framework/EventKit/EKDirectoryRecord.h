@class NSString, NSDictionary;

@interface EKDirectoryRecord : NSObject

@property (retain, nonatomic) NSString *displayName;
@property (retain, nonatomic) NSString *firstName;
@property (retain, nonatomic) NSString *lastName;
@property (retain, nonatomic) NSString *preferredAddress;
@property (copy, nonatomic) NSString *principalPath;
@property (readonly) NSDictionary *userInfo;

+ (id)recordFromSearchResult:(id)a0;

- (id)description;
- (void).cxx_destruct;

@end
