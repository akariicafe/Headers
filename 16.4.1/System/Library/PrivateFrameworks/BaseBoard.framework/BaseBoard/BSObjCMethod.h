@class NSString, BSObjCArgument, NSArray;

@interface BSObjCMethod : NSObject <BSDescriptionProviding> {
    long long _required;
}

@property (readonly, copy, nonatomic) NSString *encoding;
@property (readonly, nonatomic) SEL selector;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, retain, nonatomic) BSObjCArgument *returnValue;
@property (readonly, retain, nonatomic) NSArray *arguments;
@property (readonly, retain, nonatomic) BSObjCArgument *firstArgument;
@property (readonly, retain, nonatomic) BSObjCArgument *lastArgument;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;
- (BOOL)isEqual:(id)a0;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)copyAsOnewayVoid;
- (void).cxx_destruct;

@end
