@class NSSet, NSString;

@interface WCRAppleAllowList : NSObject

@property (retain) NSSet *allowList;
@property (readonly, nonatomic) NSString *localPath;

- (BOOL)contains:(id)a0;
- (void).cxx_destruct;
- (id)initFromFile:(id)a0;

@end
