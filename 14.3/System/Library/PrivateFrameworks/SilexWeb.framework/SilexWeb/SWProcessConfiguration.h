@class NSString;

@interface SWProcessConfiguration : NSObject <SWProcessConfiguration>

@property (readonly, nonatomic) BOOL shouldRunAtBackgroundPriority;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithBackgroundPriority:(BOOL)a0;

@end
