@class ATXMotion, NSDate;

@interface ATXCachedMotion : NSObject {
    NSDate *lastUpdated;
}

@property (readonly, copy, nonatomic) ATXMotion *currentMotion;

- (void)update:(id)a0;
- (BOOL)isExpired;
- (id)initWithATXMotion:(id)a0;
- (void).cxx_destruct;

@end
