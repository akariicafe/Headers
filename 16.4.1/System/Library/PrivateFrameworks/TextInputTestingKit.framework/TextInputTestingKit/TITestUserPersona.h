@class NSDictionary, NSMutableDictionary, UIKBTree;

@interface TITestUserPersona : NSObject

@property (retain, nonatomic) NSDictionary *personaData;
@property (retain, nonatomic) UIKBTree *currentKeyplane;
@property (nonatomic) NSMutableDictionary *keyInfo;
@property (retain, nonatomic) NSMutableDictionary *cachedKeyInfo;

- (void).cxx_destruct;
- (id)initWithPersonaName:(id)a0;
- (void)updateFromKeyplane:(id)a0;
- (struct CGPoint { double x0; double x1; })userPointForKey:(id)a0;

@end
