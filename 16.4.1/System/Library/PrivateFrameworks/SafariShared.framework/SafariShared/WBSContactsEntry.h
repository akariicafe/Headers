@class CNContact;

@interface WBSContactsEntry : NSObject

@property (readonly, nonatomic) CNContact *contact;

+ (BOOL)_isContactsLabel:(id)a0;
+ (BOOL)_isContactsProperty:(id)a0;
+ (BOOL)_isValueAStringForContactsProperty:(id)a0;
+ (id)_valueStringForValue:(id)a0 wbsProperty:(id)a1 wbsComponent:(id)a2;
+ (id)_valueStringForValue:(id)a0 wbsProperty:(id)a1 wbsComponent:(id)a2 atIndex:(unsigned long long)a3;
+ (id)_valueStringForWBSComponent:(id)a0 inAddress:(id)a1;
+ (id)_valueStringForWBSComponent:(id)a0 inInstantMessageAddress:(id)a1;
+ (BOOL)isWBSProxyProperty:(id)a0;
+ (id)localizedWBSPropertyOrLabel:(id)a0;

- (id)fullName;
- (id)initWithContact:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)_numberOfValuesForWBSProperty:(id)a0;
- (unsigned long long)_numberOfValuesForWBSProperty:(id)a0 andContact:(id)a1;
- (id)valueForWBSProxyProperty:(id)a0;
- (id)valueStringForWBSProperty:(id)a0 wbsComponent:(id)a1 atIndex:(unsigned long long)a2;

@end
