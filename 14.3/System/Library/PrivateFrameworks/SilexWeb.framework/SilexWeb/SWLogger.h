@class NSString, NSMutableDictionary;

@interface SWLogger : NSObject <SWLogger>

@property (readonly, nonatomic) NSMutableDictionary *values;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)log:(id)a0;
- (void)bindValue:(id)a0 forKey:(id)a1;
- (void)logSensitive:(id)a0;
- (id)constructLogWithMessage:(id)a0;

@end
