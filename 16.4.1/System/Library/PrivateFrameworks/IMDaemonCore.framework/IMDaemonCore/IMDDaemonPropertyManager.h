@class NSMutableDictionary, NSDictionary;

@interface IMDDaemonPropertyManager : NSObject

@property (class, readonly, nonatomic) IMDDaemonPropertyManager *sharedManager;

@property (retain, nonatomic) NSMutableDictionary *mutableProperties;
@property (retain, nonatomic) NSMutableDictionary *mutablePersistentProperties;
@property (readonly, copy, nonatomic) NSDictionary *properties;
@property (readonly, copy, nonatomic) NSDictionary *persistentProperties;

- (id)valueOfPersistentProperty:(id)a0;
- (id)valueOfProperty:(id)a0;
- (id)init;
- (void)setValue:(id)a0 ofProperty:(id)a1;
- (void).cxx_destruct;
- (void)setValue:(id)a0 ofPersistentProperty:(id)a1;

@end
