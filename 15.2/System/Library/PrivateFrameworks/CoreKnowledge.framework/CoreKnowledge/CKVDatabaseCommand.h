@class NSString, NSArray;

@interface CKVDatabaseCommand : NSObject <NSCopying>

@property (readonly, nonatomic) NSString *commandString;
@property (readonly, nonatomic) NSArray *parameters;

- (id)description;
- (BOOL)isEqualToCommand:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCommandString:(id)a0 parameters:(id)a1;
- (BOOL)updateParameters:(id)a0;
- (BOOL)updateCommandString:(id)a0;
- (void)replaceParameters:(id)a0;

@end
