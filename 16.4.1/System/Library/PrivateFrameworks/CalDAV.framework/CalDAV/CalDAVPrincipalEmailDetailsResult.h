@class NSURL, NSString, NSSet;

@interface CalDAVPrincipalEmailDetailsResult : NSObject

@property (retain, nonatomic) NSURL *principalURL;
@property (retain, nonatomic) NSString *displayName;
@property (retain, nonatomic) NSSet *preferredAddresses;

+ (id)resultFromResponseItem:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (id)addresses;

@end
