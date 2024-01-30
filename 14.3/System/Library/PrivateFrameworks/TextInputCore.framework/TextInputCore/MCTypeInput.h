@class NSString, NSArray;

@interface MCTypeInput : MCKeyboardInput

@property (readonly, copy, nonatomic) NSString *characters;
@property (readonly, copy, nonatomic) NSArray *nearbyKeys;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)canComposeNew:(id)a0;
- (id)initWithCharacters:(id)a0 nearbyKeys:(id)a1;

@end
