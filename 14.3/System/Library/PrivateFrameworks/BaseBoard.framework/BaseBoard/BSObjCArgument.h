@class NSString, NSArray;

@interface BSObjCArgument : NSObject <BSDescriptionProviding> {
    NSString *_encoding;
    unsigned long long _size;
    char _type;
}

@property (readonly, copy, nonatomic) NSString *encoding;
@property (readonly, nonatomic) char type;
@property (readonly, nonatomic) unsigned long long size;
@property (readonly, nonatomic) long long index;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *structName;
@property (readonly, retain, nonatomic) Class objectClass;
@property (readonly, copy, nonatomic) NSArray *protocols;
@property (readonly, retain, nonatomic) NSArray *containedClasses;
@property (readonly, nonatomic, getter=isObject) BOOL object;
@property (readonly, nonatomic, getter=isXPCObject) BOOL xpcObject;
@property (readonly, nonatomic, getter=isBlock) BOOL block;
@property (readonly, nonatomic, getter=isPointer) BOOL pointer;
@property (readonly, nonatomic, getter=isBoolean) BOOL boolean;
@property (readonly, nonatomic, getter=isVoid) BOOL isVoid;
@property (readonly, nonatomic, getter=isOnewayVoid) BOOL onewayVoid;
@property (readonly, nonatomic, getter=isPlistObject) BOOL plistObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;
- (id)_prettyTypeString;

@end
