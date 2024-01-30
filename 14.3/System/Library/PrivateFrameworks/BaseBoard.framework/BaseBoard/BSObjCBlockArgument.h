@class NSArray, BSObjCArgument;

@interface BSObjCBlockArgument : BSObjCArgument

@property (readonly, retain, nonatomic) BSObjCArgument *returnValue;
@property (readonly, copy, nonatomic) NSArray *arguments;

- (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)_prettyTypeString;
- (BOOL)isBlock;

@end
