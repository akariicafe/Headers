@class NSString;

@interface UPSpan : NSObject

@property (readonly) struct _NSRange { unsigned long long location; unsigned long long length; } range;
@property (readonly) unsigned long long type;
@property (readonly, copy) NSString *category;

- (void).cxx_destruct;
- (id)initWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 type:(unsigned long long)a1 category:(id)a2;

@end
