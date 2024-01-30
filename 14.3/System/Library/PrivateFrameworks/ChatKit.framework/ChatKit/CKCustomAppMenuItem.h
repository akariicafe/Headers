@class NSString;

@interface CKCustomAppMenuItem : NSObject <CKAppMenuItem>

@property (readonly, nonatomic) id __ck_identifier;
@property (readonly, nonatomic) NSString *__ck_displayName;

- (void).cxx_destruct;
- (id)__ck_imageForTraitCollection:(id)a0;
- (id)initWithIdentifier:(id)a0 displayName:(id)a1;

@end
