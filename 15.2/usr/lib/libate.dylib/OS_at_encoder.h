@class NSString;

@interface OS_at_encoder : OS_object <OS_at_encoder>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isEqual:(id)a0;
- (id)copy;
- (void)dealloc;

@end
