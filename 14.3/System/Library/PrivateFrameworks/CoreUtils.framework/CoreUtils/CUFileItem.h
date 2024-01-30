@class NSString;

@interface CUFileItem : NSObject <CUDictionaryCodable>

@property (copy, nonatomic) NSString *name;
@property (nonatomic) long long size;
@property (nonatomic) int type;
@property (readonly, nonatomic) unsigned int flags;

- (void).cxx_destruct;
- (id)description;
- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void)encodeWithDictionary:(id)a0;

@end
