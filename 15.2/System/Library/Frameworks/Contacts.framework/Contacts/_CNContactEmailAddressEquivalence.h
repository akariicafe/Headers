@class NSString;

@interface _CNContactEmailAddressEquivalence : NSObject <_CNContactHandleStringEquivalenceStrategy> {
    NSString *_rawString;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)indexKeyForString:(id)a0;

- (BOOL)isEquivalentToString:(id)a0 strict:(BOOL *)a1;
- (void).cxx_destruct;
- (id)initWithEmailAddress:(id)a0;

@end
