@class NSString, NSDictionary;

@interface SUCoreErrorLayerGroup : NSObject

@property (readonly, nonatomic) long long errorLayer;
@property (readonly, retain, nonatomic) NSString *domain;
@property (readonly, nonatomic) long long minCode;
@property (readonly, nonatomic) long long maxCode;
@property (nonatomic) long long indications;
@property (retain, nonatomic) NSString *keyMatchTrue;
@property (retain, nonatomic) NSDictionary *keyMatchTrueMap;

- (id)initForLayer:(long long)a0 withDomain:(id)a1 minCode:(long long)a2 maxCode:(long long)a3 indicating:(long long)a4 ifKeyTrue:(id)a5 keyMatchTrueMap:(id)a6;
- (id)initForLayer:(long long)a0 withDomain:(id)a1;
- (id)initForLayer:(long long)a0 withDomain:(id)a1 minCode:(long long)a2 maxCode:(long long)a3;
- (id)summary;
- (id)description;
- (void).cxx_destruct;

@end
