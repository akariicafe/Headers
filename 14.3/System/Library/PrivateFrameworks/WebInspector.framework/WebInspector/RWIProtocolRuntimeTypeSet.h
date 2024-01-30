@interface RWIProtocolRuntimeTypeSet : RWIProtocolJSONObject

@property (nonatomic) BOOL isFunction;
@property (nonatomic) BOOL isUndefined;
@property (nonatomic) BOOL isNull;
@property (nonatomic) BOOL isBoolean;
@property (nonatomic) BOOL isInteger;
@property (nonatomic) BOOL isNumber;
@property (nonatomic) BOOL isString;
@property (nonatomic) BOOL isObject;
@property (nonatomic) BOOL isSymbol;
@property (nonatomic) BOOL isBigInt;

- (id)initWithIsFunction:(BOOL)a0 isUndefined:(BOOL)a1 isNull:(BOOL)a2 isBoolean:(BOOL)a3 isInteger:(BOOL)a4 isNumber:(BOOL)a5 isString:(BOOL)a6 isObject:(BOOL)a7 isSymbol:(BOOL)a8 isBigInt:(BOOL)a9;

@end
