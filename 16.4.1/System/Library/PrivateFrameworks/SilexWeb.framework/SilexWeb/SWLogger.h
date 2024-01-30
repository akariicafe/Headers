@class NSString, NSMutableDictionary;

@interface SWLogger : NSObject <SWLogger>

@property (readonly, nonatomic) NSMutableDictionary *values;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)log:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)bindValue:(id)a0 forKey:(id)a1;
- (id)constructLogWithMessage:(id)a0;
- (void)logSensitive:(id)a0;

@end
