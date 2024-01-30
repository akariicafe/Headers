@class NSArray, NSString, CNUILikenessRenderingScope;

@interface _CNUILikenessFingerprintGroupImpl : NSObject <_CNUILikenessFingerprintImpl>

@property (readonly, copy) NSArray *impls;
@property (readonly, copy) CNUILikenessRenderingScope *scope;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithImpls:(id)a0 scope:(id)a1;
- (BOOL)hasContactIdentifier:(id)a0;

@end
