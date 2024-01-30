@class NSString;

@interface WebFeature : NSObject

@property (readonly, copy, nonatomic) NSString *key;
@property (readonly, copy, nonatomic) NSString *preferenceKey;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *details;
@property (readonly, nonatomic) BOOL defaultValue;
@property (readonly, nonatomic, getter=isHidden) BOOL hidden;

- (id)description;
- (void)dealloc;
- (id)initWithKey:(id)a0 preferenceKey:(id)a1 name:(id)a2 details:(id)a3 defaultValue:(BOOL)a4 hidden:(BOOL)a5;

@end
