@class NSSet, NSString;

@interface IMParentalControlsService : NSObject

@property BOOL disableService;
@property BOOL forceAllowlist;
@property (retain) NSSet *allowlist;
@property (retain) NSString *name;

- (void).cxx_destruct;
- (void)dealloc;

@end
