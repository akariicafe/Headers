@class NSDictionary, NSString;

@interface PHNetwork : NSObject

@property (retain) NSDictionary *dictionaryRepresentation;
@property (retain, nonatomic) NSString *name;
@property (nonatomic) unsigned long long state;
@property (readonly, nonatomic) NSString *displayName;
@property (readonly) NSString *code;

+ (id)networkFromDictionary:(id)a0;

- (id)initWithName:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
