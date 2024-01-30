@interface DDMessagesCustomAction : DDAction

+ (BOOL)handlesUrl:(id)a0 result:(struct __DDResult { } *)a1;

- (id)localizedName;
- (id)iconName;
- (void)performFromView:(id)a0;

@end
