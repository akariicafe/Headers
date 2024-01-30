@class NSString;

@interface WBSOpenSearchURLTemplateParameter : NSObject

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *prefix;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } range;
@property (nonatomic, getter=isOptional) BOOL optional;

- (void).cxx_destruct;

@end
