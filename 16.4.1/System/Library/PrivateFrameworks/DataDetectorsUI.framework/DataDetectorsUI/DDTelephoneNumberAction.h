@class BCSBusinessItem, NSString;

@interface DDTelephoneNumberAction : DDAction {
    NSString *_phoneNumber;
    NSString *_body;
}

@property (retain) BCSBusinessItem *bizItem;

- (id)iconName;
- (void).cxx_destruct;
- (id)compactTitle;
- (id)contactAndLabelForPhoneNumber:(id *)a0;
- (id)contactsMatchingPhoneNumber:(id)a0 inContactStore:(id)a1;
- (id)initWithURL:(id)a0 result:(struct __DDResult { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __DDQueryRange { struct __DDQueryOffset { unsigned int x0 : 32; unsigned int x1 : 32; } x0; struct __DDQueryOffset { unsigned int x0 : 32; unsigned int x1 : 32; } x1; } x1; struct { long long x0; long long x1; } x2; long long x3; struct __CFArray *x4; struct __CFString *x5; struct __CFString *x6; void *x7; struct __CFDictionary *x8; long long x9; unsigned char x10; float x11; } *)a1 context:(id)a2;
- (id)labelToUseForEmail:(id)a0 ofContact:(id)a1;
- (id)labelToUseForPhoneNumber:(id)a0 ofContact:(id)a1;

@end
