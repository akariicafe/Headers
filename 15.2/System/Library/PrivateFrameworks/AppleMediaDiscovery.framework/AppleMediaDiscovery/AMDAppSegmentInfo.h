@class NSString, NSSet;

@interface AMDAppSegmentInfo : NSObject

@property (retain) NSString *appIdentifier;
@property (retain) NSSet *segments;

- (BOOL)isEqualToApp:(id)a0;
- (void).cxx_destruct;
- (id)initWithAppIdentifier:(id)a0 andSegments:(id)a1;

@end
