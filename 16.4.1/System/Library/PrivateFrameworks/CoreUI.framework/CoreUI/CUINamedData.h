@class NSString, NSData;

@interface CUINamedData : CUINamedLookup

@property (readonly, copy, nonatomic) NSString *utiType;
@property (readonly, copy, nonatomic) NSData *data;

- (id)initWithName:(id)a0 usingRenditionKey:(id)a1 fromTheme:(unsigned long long)a2;
- (id)description;

@end
