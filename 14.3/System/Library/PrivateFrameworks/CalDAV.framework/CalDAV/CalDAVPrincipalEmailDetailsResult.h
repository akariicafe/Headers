@class NSURL, NSString, NSSet;

@interface CalDAVPrincipalEmailDetailsResult : NSObject

@property (retain, nonatomic) NSURL *principalURL;
@property (retain, nonatomic) NSString *displayName;
@property (retain, nonatomic) NSSet *preferredAddresses;

+ (id)resultFromResponseItem:(id)a0;

- (void).cxx_destruct;
- (id)description;
- (id)addresses;

@end
