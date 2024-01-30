@class NSString, NSDictionary;

@interface IAMEvent : NSObject <IAMEventProtocol>

@property (copy, nonatomic) NSString *name;
@property (nonatomic) long long type;
@property (readonly, copy, nonatomic) id value;
@property (readonly, copy, nonatomic) NSString *source;
@property (readonly, copy, nonatomic) NSDictionary *payload;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithName:(id)a0 type:(long long)a1;
- (BOOL)matchesWithKey:(id)a0;

@end
