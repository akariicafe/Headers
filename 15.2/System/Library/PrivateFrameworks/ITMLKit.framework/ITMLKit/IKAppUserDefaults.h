@class NSString;

@interface IKAppUserDefaults : NSObject <IKAppUserDefaultsStoring>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedUserDefaults;

- (id)dataForKey:(id)a0;
- (void)removeDataForKey:(id)a0;
- (void)setData:(id)a0 forKey:(id)a1;

@end
