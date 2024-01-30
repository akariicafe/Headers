@class NSDictionary, NSString;

@interface PHNetwork : NSObject

@property (retain) NSDictionary *dictionaryRepresentation;
@property (retain, nonatomic) NSString *name;
@property (nonatomic) unsigned long long state;
@property (readonly, nonatomic) NSString *displayName;
@property (readonly) NSString *code;

+ (id)networkFromDictionary:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithName:(id)a0;

@end
