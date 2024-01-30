@class SAUIDecoratedText, NSString;

@interface SASTGridCell : AceObject <SAAceSerializable>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) SAUIDecoratedText *subTitle;
@property (retain, nonatomic) SAUIDecoratedText *title;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)gridCellWithDictionary:(id)a0 context:(id)a1;
+ (id)gridCell;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
