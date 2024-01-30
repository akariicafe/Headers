@class NSArray, BSObjCArgument;

@interface BSObjCBlockArgument : BSObjCArgument

@property (readonly, retain, nonatomic) BSObjCArgument *returnValue;
@property (readonly, copy, nonatomic) NSArray *arguments;

- (id)_prettyTypeString;
- (BOOL)isBlock;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;

@end
