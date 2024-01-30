@class NSString;

@interface ISSetApplicationBadgeOperation : ISOperation

@property (retain) NSString *badgeValue;
@property (retain) NSString *bundleIdentifier;

- (void)run;
- (id)uniqueKey;
- (void).cxx_destruct;

@end
