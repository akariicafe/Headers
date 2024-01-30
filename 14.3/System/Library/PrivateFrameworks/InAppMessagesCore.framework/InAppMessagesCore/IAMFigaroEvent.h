@class NSDictionary, NSString;

@interface IAMFigaroEvent : NSObject <IAMEventProtocol>

@property (nonatomic) long long type;
@property (copy, nonatomic) NSDictionary *payload;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) id value;
@property (readonly, copy, nonatomic) NSString *source;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)decomposeKey:(id)a0;
- (id)initWithFigaroEventProperties:(id)a0;
- (id)serializeFigaroEventProperties:(id)a0 withPrefix:(id)a1;
- (BOOL)matchesWithKey:(id)a0;

@end
