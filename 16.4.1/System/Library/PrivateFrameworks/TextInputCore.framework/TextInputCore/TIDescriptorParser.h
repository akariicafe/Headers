@class NSMutableDictionary;

@interface TIDescriptorParser : NSObject

@property (readonly, nonatomic) long long errorCode;
@property (readonly, nonatomic) NSMutableDictionary *context;

- (id)errorWithMessage:(id)a0;
- (void).cxx_destruct;
- (id)initWithErrorCode:(long long)a0;
- (id)boxNilForValue:(id)a0;
- (id)errorWithDetails:(id)a0;
- (id)errorWithMessage:(id)a0 andValue:(id)a1;
- (id)invalidDataTypeErrorForKey:(id)a0 withValue:(id)a1 dataType:(id)a2;
- (id)invalidValueErrorForKey:(id)a0 withValue:(id)a1;
- (id)missingValueErrorForKey:(id)a0;
- (id)parseArrayForKey:(id)a0 fromConfig:(id)a1 required:(BOOL)a2 errors:(id)a3;
- (id)parseBooleanForKey:(id)a0 fromConfig:(id)a1 required:(BOOL)a2 errors:(id)a3;
- (id)parseDictionaryForKey:(id)a0 fromConfig:(id)a1 required:(BOOL)a2 errors:(id)a3;
- (id)parseFloatForKey:(id)a0 fromConfig:(id)a1 required:(BOOL)a2 errors:(id)a3;
- (id)parseIntegerForKey:(id)a0 fromConfig:(id)a1 required:(BOOL)a2 errors:(id)a3;
- (id)parseNumberForKey:(id)a0 fromConfig:(id)a1 required:(BOOL)a2 errors:(id)a3;
- (id)parseObjectForKey:(id)a0 fromConfig:(id)a1 required:(BOOL)a2 errors:(id)a3 validate:(id /* block */)a4;
- (id)parseStringForKey:(id)a0 fromConfig:(id)a1 required:(BOOL)a2 errors:(id)a3;

@end
