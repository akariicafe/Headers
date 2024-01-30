@class NSString;

@interface _CNContactPhoneNumberEquivalence : NSObject <_CNContactHandleStringEquivalenceStrategy> {
    NSString *_rawString;
    struct { char *x0; char *x1; char *x2; unsigned int x3; char *x4; unsigned int x5; char *x6; unsigned int x7; } *_decomposedRepresentation;
    char *_decomposedNumberDigits;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)indexKeyForString:(id)a0;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithPhoneNumberString:(id)a0;
- (BOOL)isRawStringEquivalent:(id)a0;
- (BOOL)preparePhoneNumberRepresentation;
- (BOOL)isPhoneNumberEquivalent:(id)a0 strict:(BOOL *)a1;
- (BOOL)isEquivalentToString:(id)a0 strict:(BOOL *)a1;

@end
