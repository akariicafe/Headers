@class NSSet, NSString;

@interface IMParentalControlsService : NSObject

@property BOOL disableService;
@property BOOL forceWhiteList;
@property (retain) NSSet *whitelist;
@property (retain) NSString *name;

- (void).cxx_destruct;
- (void)dealloc;

@end
