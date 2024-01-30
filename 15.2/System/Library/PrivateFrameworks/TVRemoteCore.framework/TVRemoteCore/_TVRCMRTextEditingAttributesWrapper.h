@class NSString;

@interface _TVRCMRTextEditingAttributesWrapper : NSObject {
    void *_attributes;
}

@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *prompt;
@property (readonly, nonatomic) struct _MRTextInputTraits { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; struct { long long x0; long long x1; } x5; BOOL x6; BOOL x7; long long x8[10]; unsigned long long x9; } traits;

- (id)initWithAttributes:(void *)a0;

@end
