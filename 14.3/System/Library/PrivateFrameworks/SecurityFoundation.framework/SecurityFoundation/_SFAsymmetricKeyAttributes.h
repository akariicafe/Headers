@class NSString, _SFKeySpecifier;

@interface _SFAsymmetricKeyAttributes : NSObject <_SFKeyAttributes>

@property (readonly, copy, nonatomic) _SFKeySpecifier *keySpecifier;
@property (readonly, copy, nonatomic) NSString *keyDomain;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
