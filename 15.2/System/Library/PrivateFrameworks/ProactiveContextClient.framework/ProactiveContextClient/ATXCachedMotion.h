@class ATXMotion, NSDate;

@interface ATXCachedMotion : NSObject {
    NSDate *lastUpdated;
}

@property (readonly, copy, nonatomic) ATXMotion *currentMotion;

- (BOOL)isExpired;
- (void).cxx_destruct;
- (void)update:(id)a0;
- (id)initWithATXMotion:(id)a0;

@end
