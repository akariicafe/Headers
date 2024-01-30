@class NSString, NSDictionary;

@interface SUCoreErrorAttributes : NSObject

@property (readonly, retain, nonatomic) NSString *domain;
@property (readonly, nonatomic) long long code;
@property (readonly, retain, nonatomic) NSString *codeName;
@property (nonatomic) long long indications;
@property (retain, nonatomic) NSString *keyMatchTrue;
@property (retain, nonatomic) NSDictionary *keyMatchTrueMap;

+ (id)nameForIndication:(long long)a0;
+ (id)descriptionForIndication:(long long)a0;

- (void).cxx_destruct;
- (id)description;
- (id)initForDomain:(id)a0 withCode:(long long)a1 ofCodeName:(id)a2 indicating:(long long)a3 ifKeyTrue:(id)a4 keyMatchTrueMap:(id)a5;

@end
