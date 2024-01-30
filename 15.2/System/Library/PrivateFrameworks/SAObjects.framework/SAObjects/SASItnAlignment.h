@class NSString;

@interface SASItnAlignment : AceObject <SAAceSerializable>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long firstPostItnCharPos;
@property (nonatomic) long long firstPreItnTokenIndex;
@property (nonatomic) long long lastPostItnCharPos;
@property (nonatomic) long long lastPreItnTokenIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)itnAlignment;
+ (id)itnAlignmentWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
