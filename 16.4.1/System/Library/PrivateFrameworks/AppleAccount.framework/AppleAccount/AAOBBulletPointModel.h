@class NSString;

@interface AAOBBulletPointModel : NSObject <AAOBBulletPointModelProtocol>

@property (copy, nonatomic) NSString *symbolName;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithSymbolNamed:(id)a0 title:(id)a1 description:(id)a2;

@end
