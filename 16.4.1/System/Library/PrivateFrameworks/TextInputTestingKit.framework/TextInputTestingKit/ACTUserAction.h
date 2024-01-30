@class NSString;

@interface ACTUserAction : NSObject <ACTUserAction>

@property (nonatomic) unsigned long long inputSegment;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)applyWithTyper:(id)a0 log:(id)a1;

@end
