@class ATXMotion, NSDate;

@interface ATXCachedMotion : NSObject {
    NSDate *lastUpdated;
}

@property (readonly, copy, nonatomic) ATXMotion *currentMotion;

- (BOOL)isExpired;
- (void).cxx_destruct;
- (id)initWithATXMotion:(id)a0;
- (void)update:(id)a0;

@end
