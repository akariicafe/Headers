@class NSArray, BSObjCArgument;

@interface BSObjCBlockArgument : BSObjCArgument

@property (readonly, retain, nonatomic) BSObjCArgument *returnValue;
@property (readonly, copy, nonatomic) NSArray *arguments;

- (BOOL)isBlock;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)_prettyTypeString;
- (void).cxx_destruct;

@end
