@class NSString, NSMutableArray, NSArray;

@interface CalDAVPrincipalResult : NSObject

@property (retain, nonatomic) NSMutableArray *mCUAddresses;
@property (retain, nonatomic) NSMutableArray *mEmailAddresses;
@property (retain, nonatomic) NSString *firstName;
@property (retain, nonatomic) NSString *lastName;
@property (retain, nonatomic) NSString *displayName;
@property (retain, nonatomic) NSString *resultType;
@property (retain, nonatomic) NSString *principalPath;
@property (readonly, nonatomic) NSString *emailAddress;
@property (retain, nonatomic) NSArray *emailAddresses;
@property (readonly, nonatomic) NSArray *cuAddresses;
@property (readonly, nonatomic) NSString *preferredCUAddress;

+ (id)resultFromResponse:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (id)init;
- (id)initWithResponse:(id)a0;
- (id)convertToDAContactSearchResultElement;
- (void)addEmail:(id)a0;
- (void)addCUAddress:(id)a0;

@end
