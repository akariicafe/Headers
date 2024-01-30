@class NSString, NSSet, NSMutableSet;

@interface BNSuspensionController : NSObject {
    NSMutableSet *_suspensionReasons;
}

@property (copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic, getter=isSuspended) BOOL suspended;
@property (readonly, copy, nonatomic) NSSet *activeSuspensionReasons;

+ (void)initialize;

- (void).cxx_destruct;
- (BOOL)setSuspended:(BOOL)a0 forReason:(id)a1;

@end
