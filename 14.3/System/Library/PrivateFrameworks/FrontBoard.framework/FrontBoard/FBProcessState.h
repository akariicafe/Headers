@class NSString;

@interface FBProcessState : NSObject <BSDescriptionProviding, NSCopying>

@property (nonatomic) int pid;
@property (nonatomic) long long taskState;
@property (nonatomic) long long visibility;
@property (nonatomic, getter=isDebugging) BOOL debugging;
@property (readonly, nonatomic, getter=isRunning) BOOL running;
@property (readonly, nonatomic, getter=isForeground) BOOL foreground;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;
- (BOOL)isEqual:(id)a0;
- (id)initWithPid:(int)a0;

@end
