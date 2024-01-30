@class NSString;

@interface MTCompanionSyncSerializer : NSObject <SYChangeSerializer>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)dataFromChange:(id)a0;
- (id)changeFromData:(id)a0 ofType:(long long)a1;

@end
