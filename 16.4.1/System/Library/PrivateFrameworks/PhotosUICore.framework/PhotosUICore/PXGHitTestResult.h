@class PXGLayout, PXGSpriteReference, NSString;

@interface PXGHitTestResult : NSObject {
    id /* block */ _userDataProvider;
    id _userData;
    NSString *_identifier;
}

@property (readonly, nonatomic) PXGSpriteReference *spriteReference;
@property (readonly, nonatomic) PXGLayout *layout;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) id userData;
@property (readonly, nonatomic) BOOL isDecorated;

- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)initWithSpriteReference:(id)a0 layout:(id)a1 identifier:(id)a2 userData:(id)a3;
- (id)initWithSpriteReference:(id)a0 layout:(id)a1 identifier:(id)a2 userDataProvider:(id /* block */)a3;

@end
