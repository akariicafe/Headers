@class NSString;

@interface PCSAccountManager : NSObject

@property (retain) NSString *dsid;

- (unsigned long long)accountStatus;
- (id)initWithDSID:(id)a0;
- (void).cxx_destruct;

@end
