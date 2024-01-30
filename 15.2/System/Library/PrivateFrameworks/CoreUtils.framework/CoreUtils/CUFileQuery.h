@class NSString;

@interface CUFileQuery : NSObject <CUDictionaryCodable>

@property (copy, nonatomic) id /* block */ completionHandler;
@property (copy, nonatomic) NSString *path;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithDictionary:(id)a0;

@end
