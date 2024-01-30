@class NSString;

@interface SAMPMediaPlayerOrderingTerm : AceObject <SAAceSerializable>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *mediaPlayerOrderingDirection;
@property (nonatomic) int mediaPlayerSearchProperty;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)mediaPlayerOrderingTerm;
+ (id)mediaPlayerOrderingTermWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
