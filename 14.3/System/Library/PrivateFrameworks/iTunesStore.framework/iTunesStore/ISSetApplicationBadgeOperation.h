@class NSString;

@interface ISSetApplicationBadgeOperation : ISOperation

@property (retain) NSString *badgeValue;
@property (retain) NSString *bundleIdentifier;

- (id)uniqueKey;
- (void)run;
- (void).cxx_destruct;

@end
